#include <iostream>

struct Animal
{
    //Attribute
    std::string name;
    
    //Method
    void brank()
    {
        std::cout<<"This is Animal "+ this-> name+ '\n';
    }
    //Sử dụng con trỏ hàm
    void(Animal::*ptrBrank)()= &Animal::brank;

    Animal (std::string name)
    {
        this->name= name;
    }

};


int main()
{
    //In giá trị của struct
    Animal a("Animal A");
    a.brank();
    a.name;
    std::cout<<a.Animal::name<<'\n';

    //In địa chỉ 
    std::cout<<"Address of a: "<<&a<<'\n';
    std::cout<<"Address of name: "<<&a.name<<'\n';
    std::cout<<"Address of brank: "<<(void*)a.ptrBrank<<'\n';

    return 0;
}