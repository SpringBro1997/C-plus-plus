#include <iostream>
#include <fstream>

int main ()
{
    std::ofstream openFile;   // Tạo class ofstream có tên openfile // Bộ nhớ stack memory 
    std::string path= "./write.txt"; //Cài đường dẫn file
    openFile.open(path);  //Mở fle

    // Kiểm tra file mở thành công 
    if (openFile.is_open())
    {
        std::cout<<"Open file "+ path+'\n';
        openFile<<"Wellcome to Ha noi\n";
        openFile<<"To day, I learn C++\n";
        openFile<<"Animal\n";
    } else{
        std::cout<<"No success open File"+path+'\n';
    }
    
    openFile.close();
    return 0;
}