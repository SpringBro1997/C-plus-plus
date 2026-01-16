#include<iostream>
#include<cmath>
#include<vector>
#include<sstream>

//Đảo ngược thứ tự số trong mảng
void change(int a[], int size_a)
{
    int temp;
    for (int i= 0; i< size_a/2; i++)
    {
        temp = a[i];
        a[i] = a[size_a- 1 - i];
        a[size_a- 1- i]= temp;
        //std::cout << a[i] << ' ';
    }
    std::cout << '\n';
    for (int i= 0; i< size_a; i++)
    {
        std::cout << a[i] << ' ';
    }
    std::cout << '\n';
}

//Đổi thành số
int change_sum(int a[], int size_a)
{
    int sum = 0;
    
    for (int i= 0; i< size_a; i++)
    {
        int pow_a = pow(10, size_a - 1 - i);
        sum += a[i] * pow_a; // 4 3 2 1
    }
    return sum;
}

// Cộng 2 số
void sum (int a, int b)
{
    int c = 0;
    c = a + b;
    std::cout << a + b << '\n';
}

//Chuyển biến int sum thành biến string
void str (int a)
{
    std::stringstream str;           //Tạo class
    str << a;                        //Gán giá trị a vào class
    std::string str_a = str.str();   //Tạo biến string gán giá trị trong class vào biến
    for (int i= 0; i< str_a.length(); i++)
    {
        std::cout<< str_a[i]<<' ';
    }

    std::cout <<'\n';

    //
    int temp;
    for (int i= 0; i< str_a.length()/2; i++)
    {
        temp = str_a[i];
        str_a[i] = str_a[str_a.length()- 1 - i];
        str_a[str_a.length()- 1- i]= temp;
    }

    std::cout <<'\n';
    for (int i= 0; i< str_a.length(); i++)
    {
        std::cout << str_a[i]<<' ';
    }
    
}

int main()
{
    int a[] = {9, 9, 9, 9};
    int b[] = {9, 9, 9, 9, 9, 9, 9};
    int sum;
    int size_a = sizeof(a) / sizeof(a[0]);
    int size_b = sizeof(b) / sizeof(b[0]);
    
    change(a, size_a);
    change(b,size_b);
    sum= change_sum(b, size_b)+change_sum(a, size_a);

    str(sum);
    

    return 0;
}