#include <iostream>

void s (int a)
{


    for (int i= 0;i< a; i++)
    {
        for (int j= 0; j < a; j++)
        {
            std::cout<<"*";
        }
        std::cout << std::endl;
    }
    
    //In dấu * từ dòng (i)= 0 tại cột (j)= 0  
    for (int i= a; i> 0; i--)
    {
        for (int j= a; j>= i; j-- )
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // In dấu * từ dòng (i)= 0 tại cột (j)= 0
    for (int i = 0; i< a; i++)
    {
        for (int j= a; j> i; j-- )
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for (int i = 1; i <= a; i ++)
    {
        // In khoảng trắng
        for (int j = a; j> i; j-- )
        {
            std::cout << " "; 
        }
        // In dấu sao
        for (int j = 0; j < 2*i-1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
int main ()
{
    int a;
    std::cout<<"nhap so: ";
    std::cin>>a;
    s(5);
}