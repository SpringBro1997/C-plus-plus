/* Con trỏ hằng đến dữ liệu hằng */
#include<iostream>
void ptr(const int* const ptr1)
{
    // *ptr= 10;  //-> Không thể thay đổi giá trị
    // ptr= nullptr; //->Không thể thay đổi vị trí
    std::cout<<"Address of ptr "<<ptr1<<std::endl;
    std::cout<<"Value of ptr "<<*ptr1<<std::endl;
}
int main()
{
    int a= 10;
    ptr(&a);
}