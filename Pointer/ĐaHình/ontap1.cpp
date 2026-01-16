#include <iostream>

struct Animal
{
    //Attribute
    std::string name;
    
    //Method
    void brank()
    {
        std::cout<<"This is Animal "+'\n' this-> name+ '\n';
    }
    //Sử dụng con trỏ hàm
    void(Animal::*ptrBrank)()= &Animal::brank;

    Animal (std::string name)
    {
        this->name= name;
    }

    Animal (){}

};


int main()
{
    Animal a("Animal One");
    Animal b("Animal Two");
    
    Animal *ptr= nullptr; // khai báo giá trị địa chỉ con trỏ nullptr
    ptr= new Animal("Animal three");
    
    // Sử dụng toán tử "->"" để truy cập các thành viên của đối tượngthông qua con trỏ. Toán tử này sẽ tự động giải phóng địa chỉ (dereference ) của con trỏ và trả về giá trị thực sự
    ptr->brank();
    std::cout<<ptr->name<<'\n';
    delete ptr;
    
    Animal *ptr1= nullptr; // khai báo giá trị địa chỉ con trỏ nullptr
    ptr1= new Animal[3];
    ptr1[0]={"Dog"};
    ptr1[1]={"Cat"};
    ptr1[2]={"Duck"};
    std::cout<<ptr1[0]->name<<'\n';
    std::cout<<(ptr1+1)->name<<'\n'; // In giá trị của phần tử thứ 2
    std::cout<<(ptr1+2)->name<<'\n'; // In giá trị của phần tử thứ 3
    // Có thể sử dụng vòng lặp For
    delete ptr1[];

    return 0;
}