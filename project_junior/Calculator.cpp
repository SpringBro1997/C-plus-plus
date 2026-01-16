/* Tạo 1 máy tính đơn giản */
#include<iostream>

struct Calculator
{
    int a,b;
    int sum= 0;
    int minus= 0;
    int plus= 1;
    int divine= 1;
    
    //Hàm tính tổng
    int sumA( int &a, int &b)
    {
        return sum= a+b;
    }

    //Hàm tính hiệu
    int minusA(int &a, int &b)
    {
        if (a>=minus)
        {
            return minus= a- b;
        }
        else
        {
            return minus= b-a;
        }
    }

    //Hàm tính tích
    int plusA(int &a, int &b)
    {
        return plus= b*a;
    }

    //Hàm tính chia
    int divineA(int &a, int &b)
    {
        return divine= a/b;
    }
};


int main()
{
    int a,b,choice;
    char phepTinh;
    char stop;
    Calculator pheptinhcoban;
    do
    {
        std::cout<<"**** Calculator ****\n";
        std::cout<<"** Function **\n";
        std::cout<<"1. Cac phep tinh co ban\n";
        std::cout<<"2. Lich su ket qua\n";
        std::cout<<"3. Ket thuc\n";
        std::cout<<"Nhap lua chon: ";
        std::cin>>choice;
        if (choice== 1)
        {
            std::cin>>a;
            std::cin>>phepTinh;
            std::cin>>b;
            switch (phepTinh)
                {
                    case '+':
                        std::cout<<a<<' +'<<b<<" = "<<pheptinhcoban.sumA(a,b)<<"\n";
                    case '-':
                        std::cout<<a<<' -'<<b<<" = "<<pheptinhcoban.minusA(a,b)<<"\n";
                    case '*':
                        std::cout<<a<<' *'<<b<<" = "<<pheptinhcoban.plusA(a,b)<<"\n";;
                    case '/':
                        std::cout<<a<<' /'<<b<<" = "<<pheptinhcoban.divineA(a,b)<<"\n";;        
                }
            
        } else if (choice== 2)
        {
            /* code */
        } else if (choice== 3)
        {
            /* code */
        } else if (choice== 4)
        {
            std::cout<<"** End Progaming **\n";
            break;
        }
    
    } while (choice< 5);
    
    return 0;
    std::system("cls");
}