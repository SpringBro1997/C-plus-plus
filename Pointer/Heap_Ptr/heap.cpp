/* 
   Bộ nhớ Stack- Memory (bộ nhớ tĩnh)- Bộ nhớ Heap- Memory (bộ nhớ động)

*/
#include <iostream>

struct heap
{
    heap (std::string animal)
    {
         std::cout<<animal<std::endl;
    }
};


int main()
{
    int a= 10;
    int *ptr= nullptr;
    
    // Khai báo con trỏ thuộc vùng bộ nhớ Heap với Attribute
    //Khởi tạo trực tiếp con trỏ ptr1 vào vùng bộ nhớ Heap 
    int *ptr1= new int(a);
    std::cout<<ptr1;
    delete ptr1;

    // Khai báo con trỏ thuộc vùng bộ nhớ Heap với Array
    // Khai báo trực tiếp
    int array[3];
    int *ptr2= new array[3];
        //Khai báo từng giá trị mảng
        ptr2[0]={1};
        ptr2[1]={2};
        ptr2[2]={3};
    
    //Khai báo con trỏ thuộc vùng bộ nhớ Heap với lớp cơ sở (Struct)
    heap *ptr3= nullptr;
    ptr3= new heap[3];

    return 0;
}