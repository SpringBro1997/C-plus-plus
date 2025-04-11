#include <iostream>
int main () 
{
    int sum= 0;
    int value_student;
    float point;

    //Nhập số sinh viên
    std::cout<<"nhap so sinh vien: ";
    std::cin>>value_student;
    for (int i= 1; i<= value_student; i++)
    {   
        //Nhập số điểm sinh viên
        std::cout<<"nhap diem trung binh ban so "<<i<<": ";
        std::cin>>point;

        //Xử lý xếp loại sinh viên nhận học bổng và số tiền nhà trường cần trả
        // point không phải chuỗi nên không sử dụng point[i] được- muốn sử dụng phải khai báo point[] 
        if (point>= 9)
        {
            std::cout << "diem trung binh sinh vien " << i << ": " << point <<" xep loai xuat sac hoc bong 1800000"<< std::endl;
            
            //Tính số tiền nhà trường phải trả
            sum = sum + 1800000;
        } 
        else if (point>=8 && point< 9)
        {
            std::cout << "diem trung binh sinh vien " << i << ": " << point << " xep loai xuat sac hoc bong 1400000" << std::endl;
            sum = sum+ 1400000;
        }
        else if (point >= 7 && point< 8)
        {
            std::cout << "diem trung binh sinh vien " << i << ": " << point << " xep loai xuat sac hoc bong 1200000" << std::endl;
            sum = sum + 1200000;
        }
        std::cout << "so tien nha truong phai tra: " << sum << std::endl;
    }
    
}
