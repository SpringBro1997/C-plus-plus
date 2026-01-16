#include <iostream>
#include <fstream>

int main ()
{
    std::string path= ".\\text1.txt";
    std::ofstream writeFile(path, std::ios::app);  // Thêm vào cuối dòng nội dung file- cách 2 std::ofstream writeFile(path, writeFile.app)
    if (writeFile.is_open())
    {
        std::cout<<"Open file success @@\n";
        /* writeFile<<"Hello\n";
        writeFile<<"Morning\n";
        writeFile<<"Affternoon\n"; */
        writeFile<<"Hi\n";
        std::cout<<"END!!!\n";
    }
    writeFile.close();
    return 0;
}