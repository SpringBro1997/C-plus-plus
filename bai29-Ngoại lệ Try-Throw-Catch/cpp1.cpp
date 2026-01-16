/* 
+ Ngoại lệ chuẩn: C++ cung cấp các lớp ngoại lệ chuẩn như std::exception, std::runtime_error, std::logic_error...
    Bạn có thể sử dụng các lớp này để bắt các ngoại lệ thông dụng.
    * Lớp std::exception: là lớp cha trong C++  là lớp cơ bản nhấtcho tất cả các ngoại lệ chuẩn, Bạn có thể sử dụng để bắt mọi loại ngoại lệ
        Đây là 1 số lớp ngoại lệ chuẩn kế thừa từ std::exception
            std::runtime: Ngoại lệ cho các lỗi xảy ra khi chương trình chạy
            std::logic_error: Ngoại lệ cho các lỗi logic trong mã, như: std::invalid_argument
            std::out_of_range
            std::bad_alloc: Ngoại lệ cho các lỗi cấp phát bộ nhớ thất bại (thường từ new)
            std::bad_cast: Ngoại lệ cho lỗi ép kiểu thất bại khi dùng dynamic_cast
            Mỗi lớp kế thừa này đều có thể cung cấp thông tin cụ thể hơn thông qua hàm what() của riêng nó
    */
#include<iostream>

//Khai báo 1 hàm void
void error(int a)
{
    if (a== 0)
    {
        throw std::exception();
    }
}

int main()
{
    try
    {
        int a= 5;
        int b= 0;
        /* if (b== 0)
        {
            //Khai báo đối tượng ném trực tiếp
            //std::string a="Khong the chia cho 0 \n";
            //throw a;
            //std::exception e;
            //throw e;
            
           //Không cần khai báo đối tượng ném
            throw std::string("Khong the chia cho 0 \n");
            throw std::exception();
        } */
        
        //Sử dụng hàm để khai báo throw
        error(b);
        int result= a/b;
        std::cout<<"Value result: "<<std::endl;
        
    }
   
    //catch phái bắt dữ liệu từ ném từ throw đúng với loại khai báo trong throw
    /* catch( std::string a // const std::string &a) //Bắt lỗi từ throw 
    {
        std::cout << "Error: " <<a <<'\n';
    } */
    catch (const std::exception &e)
    {
        std::cout << "Error: " <<e.what() <<'\n';
    }

     std::cout << "End The Program " << '\n';

    return 0;
}