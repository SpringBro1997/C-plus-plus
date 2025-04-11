#include <iostream>
int main ()
{
    int value_student;
    std::cout<<"so luong hoc sinh thi hsg: ";
    std::cin>>value_student;
    float math,phy,ches;
    for (int i= 1; i<= value_student; i++)
    {
        float sum= 0;
        std::cout << "diem toan: ";
        std::cin >> math;
        std::cout << "diem vat ly: ";
        std::cin >> phy;
        std::cout << "diem hoa: ";
        std::cin >> ches;
        std::cout<<"thanh tich hoc sinh "<<i<<" toan: "<<math<<" ly: "<<phy<<" hoa: "<<ches<<std::endl;
        sum= math+phy+ches;
        std::cout<<"tong diem cua hoc sinh "<<i<<" la: "<<sum<<std::endl;
    }
    
}