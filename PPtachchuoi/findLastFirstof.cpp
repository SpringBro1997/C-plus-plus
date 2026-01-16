/* Sử dụng find_last_of và find_first_of */
#include <iostream>

void findName()
{
    
}

int main()
{
    std::string fullName= "Hello World";

    //Tìm vị trí cuối cùng của ký tự trong 1 chuỗi
    // Vị trí 'l' cuối nằm ở vị trí 9
    size_t findLast= fullName.find_last_of('l');  // 9

    //Tìm vị trí đầu tiên của ký tự trong 1 chuỗi
    // Vị trí 'l' đầu nằm ở vị trí 2
    size_t findFirst= fullName.find_first_of('l'); // 2
    
    return 0;
}