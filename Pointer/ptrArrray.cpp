/* Con trỏ pointer cho mảng */
#include<iostream>
int main ()
{
    int array[5]={1,2,3,4,5};

    //Cách 1: Gán trực tiếp con trỏ vào mảng
    // Địa chỉ và giá trị địa chỉ con trỏ trỏ tới là phần tử đầu tiên của mảng- đó cũng là địa chỉ của mảng mà con trỏ trỏ tới
    int* ptr= array;  
    std::cout<<"Address of ptr: "<<ptr<<std::endl;
    std::cout<<"Value of ptr: "<<*ptr<<std::endl;

    //Cách 2: Gán con trỏ vào địa chỉ đầu hoặc cuối của 1 biến trong mảng
    // Gán con trỏ trỏ tới địa chi biến đầu hoặc cuối trong 1 mảng
    int* ptr1= &array[0];
    std::cout<<"Address of ptr1: "<<ptr1<<std::endl;
    std::cout<<"Value of ptr1: "<<*ptr1<<std::endl;

    int* ptr2= &array[4];
    std::cout<<"Address of ptr2: "<<ptr2<<std::endl;
    std::cout<<"Value of ptr2: "<<*ptr2<<std::endl;

    // Sử dụng hàm for để in giá trị
    //cách 1: ptr[i]
    for (int i= 0; i< 5; i++)
    {
        std::cout<<"Value of array ptr: "<<ptr[i]<<std::endl;
        std::cout<<"Address of array ptr: "<<&ptr[i] <<std::endl;
    }

    //Cách 2: *(ptr+ i) hoặc *(ptr[4]- i)
    for (int i= 0; i< 5; i++)
    {
        std::cout<<"Value of array ptr1: "<<*(ptr1+ i)<<std::endl;
        std::cout<<"Address of array ptr1: "<<(ptr1+ i) <<std::endl;
    }
    
    for (int i= 4; i>= 0; i--)
    {
        std::cout<<"Value of array ptr2: "<<*(ptr2- i)<<std::endl;
        std::cout<<"Address of array ptr2: "<<(ptr2- i) <<std::endl;
    }
    
    return 0;
}
