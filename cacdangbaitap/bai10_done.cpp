#include <iostream>

// Tạo hàm kiểm tra số nguyên có phải số nguyên tố hay không
void value (int a) 
{
    int cout= 0;
    for (int i= 2; i< a; i++)
    {
        int b = a % i;
        if (b== 0)
        {
            cout++;
        }
    }
    if (cout >= 1)
    {
        std::cout << "Khong" << std::endl;
    }
    else
    {
        std::cout << "Co" << std::endl;
    }
}
int main () 
{
    int a,b;
    std::cout<<"nhap so a: ";
    std::cin>>a;
    value (a);
}