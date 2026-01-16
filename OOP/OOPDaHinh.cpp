/* Tính OOP đa hình với Struct */
#include <iostream> 
struct Animal
{
    public:
        
    std::string name;  // attribute
        
    void bark()  // method
        {
            std::cout << "Animal ne ne"+ this->name+'\n';
        }
    //Tạo Hàm con trỏ 
    void (Animal::*ptrBark)()= &Animal::bark;    


    Animal (std::string name)
        {
            this->name = name;  // Khởi tạo thuộc tính name
            std::cout << "Animal constructor called for " << this->name << '\n';
        }
};

int main ()
{
    Animal a("Dog");
    Animal b("Cat");

    //Biến (Attribute)
    std::cout<<"Object a: "<< a.name<<'\n';
    a.bark();
    std::cout<<"Address of object a: "<<&a<<'\n';
    std::cout<<"Address of Attribute Name: "<<&a.name  <<'\n';
    std::cout<<"Address of method Bark: "<<(void*)a.ptrBark <<'\n';
    
    return 0;  // Kết thúc chương trình
}