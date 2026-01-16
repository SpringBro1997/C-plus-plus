#include <iostream>
struct cha
{
    void father()
    {
        std::cout<<"Father"<<std::endl;
    }
};

struct me
{
    void mother()
    {
        std::cout<<"Mother"<<std::endl;
    }
};


struct con  : cha, me
{
    void brother()
    {
        //Sử dụng toán tử phạm vi để gọi hàm của lớp cha
        cha::father();
        me::mother();
    }
};

int main()
{
    //Cách 1: Tạo đối tượng con và gọi hàm con- đã sử dụng toán tử phạm vi ở struct con 
    con child;
    child.brother(); // Gọi hàm con để in ra "Father" và "Mother"

    //Cách 2: Gọi hàm của lớp cha và mẹ thông qua đối tượng con bằng toán tử phạm vi
    child.cha::father(); // Gọi hàm cha để in ra "Father"
    child.me::mother(); // Gọi hàm mẹ để in ra "Mother"
    return 0;
}