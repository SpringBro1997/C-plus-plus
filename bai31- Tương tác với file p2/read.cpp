#include <iostream>
#include <fstream>

int main ()
{
    std::ifstream openFile;
    std::string path= "./text.txt";
    std::string line;
    openFile.open(path);
    
    if (openFile.is_open())
    {
        std::cout<<"Success openFile\n";
    } else
    {
        std::cout<<"No success openfile\n";
    }
    
    

    //Lấy nội dung bên trong File
    std::cout<<"Noi dung File: \n";
    while (std::getline(openFile,line))
    {
        std::cout<<line<<'\n';
    }
    
    //Đóngg file
    openFile.close();
    return 0;
}