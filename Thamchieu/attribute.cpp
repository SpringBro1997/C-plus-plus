/* 
    Tham chiếu đến biến:
        + Biến là 1 biến thường
        + Biến là 1 biến hằng
       
*/
#include<iostream>
int main()
{
    //Biến thường (Với biến thường: Có thể dùng cả int& và const int&)
    int a= 10;
    int &ref= a;
    std::cout<<"Gia tri ref la bien Tham chieu cua a: "<<ref<<std::endl;
    std::cout<<"Gia tri cua a: "<<a<<std::endl;
    std::cout<<"Thay doi gia tri cua bien tham chieu ref lam thay doi gia tri cua bien a\n";
    ref= 20;
    std::cout<<"Gia tri ref khi thay doi: "<<ref<<std::endl;
    std::cout<<"Gia tri cua a khi bien tham chieu thay doi: "<<a<<std::endl; // làm thay đổi giá trị của biến a

    //Biến hằng 
    //biến được tham chiếu là hằng thì biến tham chiếu cũng phải là hằng:
    const int b= 30;   //Không thể thay đổi được giá trị
    const int &ref2= b; //Không thể thay đổi được giá trị
    std::cout<<"Gia tri ref2 la bien Tham chieu cua b: "<<ref2<<std::endl;
    std::cout<<"Gia tri cua b: "<<b<<std::endl;
    //Tham chiếu là hằng
    int c= 40;
    const int &ref3= c; 
    std::cout<<"Gia tri ref3 la bien Tham chieu cua c: "<<ref3<<std::endl;
    std::cout<<"Gia tri cua c: "<<c<<std::endl;
    std::cout<<"Thay doi gia tri cua bien cua bien c lam thay doi gia tri tham chieu ref3 \n";
    c= 50;
    std::cout<<"Gia tri ref khi thay doi: "<<ref3<<std::endl; //Không bị thay đổi khi c thay đổi
    std::cout<<"Gia tri cua a khi bien tham chieu thay doi: "<<c<<std::endl; 

    return 0;
}