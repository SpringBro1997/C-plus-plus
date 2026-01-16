/* Con trỏ hằng */

#include<iostream>

// Con trỏ là con trỏ hằng
//Không thể thay đổi địa chỉ con trỏ nhưng vẫn có thể thay đổi giá trị con trỏ trỏ đến
void ptr1(int* const ptr)
{
    *ptr= 19;
    // ptr = nullptr; // LỖI: Không thể thay đổi địa chỉ
    std::cout<<"Address of a: "<<ptr<<std::endl;
    std::cout<<"Value of a: "<<*ptr<<std::endl;
}

int main()
{
    int a= 10;
    ptr1(&a);
}