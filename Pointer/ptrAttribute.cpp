/* Con trỏ trỏ tới biến */
#include <iostream>
int main ()
{
    // Gán địa trị con trỏ thông qua gọi tên biến
    int a = 10;
    int* ptrAttribute= &a;
    
    // Lưu ý: Không thể gán giá trị trực tiếp biến cho con trỏ
    /*
        int* ptrAtt= nullptr;
        *ptrAtt= 11;
    */

    std::cout<<"====Value of a===="<<'\n';
    std::cout<<"value of a: "<<a<<'\n';
    std::cout<<"address of a: "<<&a<<'\n';
    
    std::cout<<"====Value of ptrAttribute===="<<'\n';
    std::cout<<"value of ptrAttribute: "<<*ptrAttribute<<'\n';
    std::cout<<"address of ptrAttribute: "<<ptrAttribute<<'\n';
    
}    
