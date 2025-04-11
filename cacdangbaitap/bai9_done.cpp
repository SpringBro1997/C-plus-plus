#include <iostream>
#include <cmath>

// Tạo hàm S tính tổng luỹ thừa
// S(a,b)= {a^1+ a^2+...+ a^b}
int s (int a, int b) 
{
    int value;
    int sum= 0;
    for (int i= 1; i<= b; i++)
    {
        value = pow(a, i);
        sum= value+ sum;
    }
    return sum;
}

int main () 
{
    int a,b,sum;
    std::cout<<"nhap so a: ";
    std::cin>>a;
    std::cout<<"nhap so b: ";
    std::cin >> b;

    //Gán giá trị a b vừa nhập vào hàm S
    sum= s(a,b);
    std::cout<<"ket qua: "<<sum<<std::endl;
}

