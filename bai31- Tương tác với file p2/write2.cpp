//Sử dụng method tellp() và seekp()

/* 
Phương thức tellp:
    trong C++ trả về vị trí hiện tại của con trỏ ghi (write pointer) trong file
    Giá trị này được tính bằng số byte từ đầu file đến vị trí hiện tại của con trỏ ghi  

Phương thức seekp:
    Trong C++ được sử dụng để di chuyển con trỏ ghi (write pointer) trong 1 file
    Cho phép bạn điều chỉnh vị trí mà dữ liệu sẽ được ghi vào file    
    Khi truyền 1 tham số

    Khi truyền 2 tham số
    std::ios::beg  -> bắt đầu tại vị trí con trỏ đầu tiên;
    std::ios::cur;  -> bắt đầu tại vị trí con trỏ hiện tại
    std::ios::end;   -> bắt đầu tại vị trí con trỏ cuối cùng
 */

#include<iostream>
#include<fstream>

int main()
{
    std::string path ="./writeText.txt";
    std::ofstream writeFile(path);

    //Method tellp()
       //Khi chưa ghi dữ liệu
    //std::streampos pos=  writeFile.tellp();
    //std::cout << "Currently cursor of writeFile object: " << pos << '\n';    //Vị trí con trỏ tại 0

       //Khi ghi dữ liệu
   // writeFile << "Sử dụng method tellp()\n";
   // std::cout << "Currently cursor of writeFile object: " << writeFile.tellp() << '\n';  //Vị trí con trỏ tại vị trí 26

    // Method seekp()
        // Khi chưa ghi dữ liệu
        // write.seekp(poisition): Di chuyển đến vị trí byte thứ 'poisition'
    writeFile.seekp(5); //byte 5 //Di chuyển đến vị trí 5 chưa ghi dữ liệu nên giá trị in ra là null
        //Khi ghi dữ liệu
    writeFile << "Ahihihi\n"; // Được ghi tại vị trí byte 5
    writeFile.seekp(7); //Di chuyển vị trí đến byte 21
    writeFile << "Ahihihi\n";  //Tại vị trí byte 21 ghi ahi
        
        //writeFile.seekp(5,)  Truyền đủ 2 tham số
    //std::ios::beg;
    //std::ios::cur;
    //std::ios::end;
    writeFile.seekp(5, std::ios::beg); // writeFile.seekp(5, writeFile.beg);
    writeFile << "Good day\n"; 

    writeFile.close();

    return 0;
}