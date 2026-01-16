/* Sự khác biệt giữa Struct và Class
    - Class và Struct đều là 1 lớp cơ sở nhưng khác nhau về quyền truy cập (defaul access modifiers ):
        + Class quyền truy cập mặc định là Private
        + Struct quyền truy cập mặc định là public
*/
#include<iostream>
//Struct
struct Struct
{
    int a;
    void Struct()
    {
        std::cout<<"Value of a in the Struct: "<<a<<std::endl;
    }
};

//Class: không thể truy cập trực tiếp vì mặc định là private, phải đổi sang public để truy cập
class Class
{
    public:
    int a;
    void Class()
    {
        std::cout<<"Value of a in the : "<<a<<std::endl;
    }
};

int main()
{
    Struct a;
    Class b;
    a.Struct(10);
    b.Class(10);

    return 0;
}


