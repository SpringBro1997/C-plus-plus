#include<iostream>
#include<fstream>

int main()
{
    std::ifstream readFile;
    std::string path=".\text.txt";
    readFile.open(path);
    if (readFile.is_open())
    {
        std::cout<<"Open file "+path+" successfully!!!\n";

        //Đọc từng dòng trong File
        std::string line; //Khởi tạo biến line string để lưu trữ từn dòng đọc trong file
        while (std::getline(readFile,line))
        {
            std::cout<<line<<'\n';
        }
        std::cout<<"End\n";

    } else
    {
        std::cout<<"Open file "+path+" unsuccessfully!!! \n";
    }
    
    readFile.close();
}