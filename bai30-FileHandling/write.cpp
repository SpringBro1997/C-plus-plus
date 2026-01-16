#include<iostream>
#include<fstream>
int main()
{
    std::ofstream openFile; // Tạo 1 class openFile -- stack memory
    std::string path= "./text.txt";  //Khai báo biến path chứa đường dẫn đến file text.txt
    std::string path2= "./text1.txt";  //Khai báo biến path chứa đường dẫn đến file text1.txt chưa có trong Folder -> tự tạo file text1
    std::string path3= "./  $$$$ text.txt";  //Khai báo biến path chứa đường dẫn đến file "./  $$$$ text.txt" -> lỗi không tìm được file
    
    // Mở file
    openFile.open(path);

    // Kiểm tra xem file đã được mở chưa
    if(openFile.is_open())  //Cú pháp xem file đã mở chưa ".is_open"
    {
        std::cout<<"File is opened successfully!!!\n";
        
        //Ghi dữ liệu vào file
        openFile<<"Today.I m try\n";
        openFile<<"Today.I m so hot\n";
        openFile<<"Today.I m learn English\n";
        openFile<<"=============\n";
        std::cout<<"Write successfully!!!\n";
    } else
    {
        std::cout<<"File is opened unsuccessfully!!! \n";
    }

    // Đóng file 
    openFile.close();  

    return 0;
}