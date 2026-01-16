/* Hàm con trỏ */
#include<iostream>
int* pointer()
{
    /* 
    Huỷ đi giá trị của biến cục bộ
    int a= 9;
    return &a; 
    */

    //Khai báo biến tĩnh 
    static int b= 10;
    return &b;

}

int main ()
{
    int* ptr= pointer();
    std::cout<<"Address of pointer: "<<ptr<<std::endl;
    std::cout<<"Value of pointer: "<<*ptr<<std::endl;
}