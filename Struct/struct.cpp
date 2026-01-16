/* Khai báo biến vào method trong Struct */

#include<iostream>

struct Test
{
    //Method Nhập số int
    
    //Cách 1: Khai báo biến trong struct
    int a;
    void insert ()
    {
        std::cin >> a;
    }
    void print()
    {
        std::cout << a << "\n";
    }
    
    //Cách 2: Sử dụng tham chiếu từ int main()
    void insert2 ( int &b)
    {
        std::cin >> b;
    }
    void print2 (int b)
    {
        std::cout << b;
    }

};

int main()
{
    Test test;

    //Cách 1
    test.insert();
    test.print();
   
    //Cách 2
    int b;
    test.insert2(b);
    test.print2(b);

    return 0;
}