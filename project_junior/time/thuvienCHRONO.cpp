/* Bộ đếm thời gian đơn giản */

#include<iostream>
#include<chrono>

int main()
{
    std::cout<<"Su dung CHRONO \n";

    //Tạo biến đơn vị thời gian
    std::chrono::milliseconds ms(1000); // 10^-3 (s)
    std::chrono::seconds s(60); // 60 (s)
    std::chrono::minutes mn(60); // 60 (p)
    std::chrono::hours hr(1); // 1 (h)

    //In giá trị bằng hàm .count()
    std::cout<<"don vi milliseconds: "<<ms.count()<<'\n';
    std::cout<<"don vi milliseconds: "<<s.count()<<'\n';
    std::cout<<"don vi milliseconds: "<<mn.count()<<'\n';
    std::cout<<"don vi milliseconds: "<<hr.count()<<'\n';

    //Chuyển đổi giá trị thòi gian sang 1 giờ sang giây, phút
    std::chrono::hours one_hour(1);
    auto sec_s= std::chrono::duration_cast<std::chrono::seconds>(one_hour);
    auto mn_s= std::chrono::duration_cast<std::chrono::minutes>(one_hour);
    //In giá trị
    std::cout<<"Chuyen doi 1 gio thanh "<<sec_s.count()<<" giay\n";
    std::cout<<"Chuyen doi 1 gio thanh "<<mn_s.count()<<" phut\n";
    return 0;
}