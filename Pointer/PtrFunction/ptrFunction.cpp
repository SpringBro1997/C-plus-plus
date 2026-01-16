#include<iostream>

// Hàm chứa biến là 1 con trỏ
void ptr1 (int *ptr)
{
    std::cout<<"Address of ptr: "<<ptr<<std::endl;
    std::cout<<"Value of ptr: "<<*ptr<<std::endl;
}

//Fuction chứa biến làm pointer
void ptr2 (int *ptr2)
{
    *ptr2= 10;
    std::cout<<"Address of ptr2: "<<ptr2<<std::endl;
    std::cout<<"Value of ptr2: "<<*ptr2<<std::endl;
}

int main ()
{
    int a= 100;
    ptr1(&a);

    //Con trỏ trỏ tới địa chỉ biến a nhưng giá trị đã bị thay đổi là 10 do khai báo trong hàm void ptr2()
    ptr2(&a); // Trùng địa chỉ của biến a nhưng giá trị đã bị thay đổi

    return 0;
}