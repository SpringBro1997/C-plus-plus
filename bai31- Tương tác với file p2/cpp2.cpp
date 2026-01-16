//Ghi dữ liệu với kiểu dữ liệu bất kỳ 

#include <iostream>
#include<fstream>

struct Student
{
    std::string name;
    int age;
    std::string country;
};

int main ()
{
    std::string path = "./TuongTacFile_p3.txt";
    std::ofstream openFile(path,std::ios::binary);
    if (openFile.is_open())
    {
        std::cout << "Success open File: Ghi du lieu voi kieu du lieu bat ky \n";
     
        //Ghi dữ liệu với kiểu dữ liệu int 
        int dataInt = 12345;
        //Ghi dữ liệu với kiểu dữ liệu Float
        float dataFloat = 12.45;

        //Ép kiểu dữ liệu int sang char (kiểu nhanh)
        openFile.write((const char*)&dataInt,sizeof(dataInt)); //Ghi ra dạng dữ liệu 
        //Ép kiểu dữ liệu float sang char (kiểu tiêu chuẩn thêm class std::ios::binary )
        openFile.write(reinterpret_cast<const char *>(&dataFloat), sizeof(dataFloat));

        //Ép kiểu cho 1 class
        Student a
        {
            "Nguyen Van A",
            19,
            "Ha noi"
        };
        openFile.write(reinterpret_cast<const char *>(&a), sizeof(a));

        //Tạo con trỏ trỏ đến 1 kiểu dữ liệu ghi dữ liệu ra 1 file
        // Tạo con trỏ cho kiểu dữ liệu dataInt
        char dataChar = static_cast<char>(dataInt);
        char *ptr = &dataChar;
        openFile.write(ptr, sizeof(dataInt));

        openFile.flush();
    }
    openFile.close();
    return 0;
}