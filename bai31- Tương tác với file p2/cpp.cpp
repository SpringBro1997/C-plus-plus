#include <iostream>
#include <fstream>

int main()
{
    //Tạo class để mở file
    std::string path= "./text2.txt";
    std::ofstream openFile(path);

    //Tạo class để đọc file
    std::ifstream readFile(path);
    std::string line;

    // Sử dụng 3 cách để ghi file
    /* 
       Cách 1:
            - operator<< :Sử dụng toán tử chèn để ghi dữ liệu (Có thể là chuỗi, số, ...)
       Cách 2:
            - put() :Sử dụng để ghi 1 ký tự vào tệp (char)       
       Cách 3:
            - write() :Ghi 1 mảng byte vào tệp. Thường là dữ liệu nhị phân        
       Cách 4:
            - flush();  //Ngay lập tức 'đẩy' dữ liệu từ bộ nhớ đệm (Buffering) ra tệp     
    */ 

    // Đảm bảo các dữ liệu đã ghi được đẩy ra tệp
    //flush()

    //Kiểm tra file đã được mở chưa- nếu đã mở tiến hành ghi- đọc file
    if (openFile.is_open() && readFile.is_open())
    {
        std::cout<<"Open file success!!!\n";
        openFile<<"Tong hop kien thuc \n";
        openFile<<"ve tuong tac file trong C++ \n";
        openFile<<"Tien hanh doc file \n";

        //Ghi 1 mảng byte dưới dạng số nhị phân
        char text[] = "Xin chao toi dang hoc lap trinh";
        char *ptr = &text[0];
        openFile.write(ptr , sizeof(text));
        
        openFile.put('R');  
        openFile.flush();  //Ngay lập tức 'đẩy' dữ liệu từ bộ nhớ đệm (Buffering) ra tệp 
        
        //Đóng file open trước khi đọc file 
        openFile.close();

        //Đọc file
        std::cout<<"Doc file\n";
        while (std::getline(readFile,line))
        {
            std::cout<<line<<'\n';
        }
        std::cout<<"END!!!\n";
    } else
    {
        std::cout<<"Open file no success @@ \n";
    }
    
    //Đóng file
    readFile.close();

    return 0;
}