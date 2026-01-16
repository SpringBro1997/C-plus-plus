/* Giá trị hằng của con trỏ */
#include<iostream>

//
void constptr(const int* ptr) // Nhập địa chỉ biến trong int main() vào
{
    //*ptr= 9; //-> Không thể thay đổi giá trị của con trỏ
    std::cout<<"Address of a: "<<ptr<<std::endl;
    std::cout<<"Value of a: "<<*ptr<<std::endl;
}
int main()
{
    int a= 10;
    constptr(&a);
}