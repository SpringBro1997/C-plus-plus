#include<iostream>

struct Animal
{
    //Khai báo ảo thuần tuý
    virtual void sleep()= 0;
};

struct Dog: Animal
{
    void sleep() override
    {
        std::cout<<"Dog"<<'\n';
    };
};

int main()
{
    // Animal b; -> Không thể khởi tạo trực tiếp
    // Khởi tạo lớp dẫn xuất
    Dog a;
    a.sleep();

    // Sử dụng khai báo địa chỉ con trỏ lớp cơ sở
    Animal *ptr= nullptr;
    ptr= new Dog; //Lớp dẫn xuất Dog được kế thừa lớp cơ sở Animal
    ptr->sleep();
    delete[] ptr;

    return 0;
}
