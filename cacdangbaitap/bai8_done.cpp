#include <iostream>

//Cách 1
/* int value (int a, int b)
{
    int max;
    for (int i= 1; i<= a; i++)
    {
        int value_1= a%i;
        int value_2= b%i;
        if (value_1== 0 && value_2== 0)
        {
            max= i;
        }
  
    }
    return max;
}
 */

// Cách 2: sử dụng hàm chứa giá trị boolean để lọc
int value(int a, int b)
{
    int max;
    for (int i = 1; i <= a; i++)
    {
        int value_1 = a % i;
        int value_2 = b % i;
        bool check= false;
        if (value_1 == 0 && value_2 == 0)
        {
            max = i;
            check= true;
        }
        else 
        {
            check;
            return 0;
        }
    }
    return max;    
}
int main()
{
    int a, b, ucln;
    std::cout << "nhap so a: ";
    std::cin >> a;
    std::cout << "nhap so b: ";
    std::cin >> b;
    ucln = value(a, b);
    std::cout << "uoc chung lon nhat: " << ucln << std::endl;
}
