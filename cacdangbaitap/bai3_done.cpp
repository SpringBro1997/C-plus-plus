#include <iostream>
int main () 
{
    int student;
    std::cout<<"nhap so hs xet tuyen: ";
    std::cin>>student;
    std::string name_student;
    float point;
    float point_school;
    std::cout << "diem trung tuyen: ";
    std::cin >> point_school;
    for (int i= 0; i< student; i++)
    {
        std::cout << "nhap ten hoc sinh " ;
        std::cin >> name_student;
        std::cin>>point;
        if (point >= point_school)
        {
            std::cout << "hoc sinh " << name_student << " : " << point<<" trung tuyen" << std::endl;
        }
        
    }
    
}