#include<iostream>
#include<cmath>

int main()
{
    int a[] = {1, 3, 4, 5};
    int b[] = {5, 6, 7, 8, 4,7};
    /* int size_c;
    int c[size_c] = {}; */
    int size_a = sizeof(a) / sizeof(a[0]);
    int size_b = sizeof(b) / sizeof(b[0]);
    int t= size_a;
    int sum = 0;

    for (int i= 0; i< size_a; i++)
    {
        int pow_a = pow(10, size_a-1 - i);
        sum += a[i] * pow_a; // 4 3 2 1
        t --;
        std::cout << sum<<'\n';
    }
    std::cout << sum;
}