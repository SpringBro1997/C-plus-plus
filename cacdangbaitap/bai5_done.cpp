#include <iostream>
int coutword (std::string value)
{
    int cout= 1;
    for (int i= 0; i< value.length(); i++)
    {
        if (value[i] == ' ')
        {
            cout++;
        }
    }
    return cout;
}
int main ()
{
    std::string s;
    std::cout<<"moi nhap chuoi: ";
    std::getline (std::cin, s); // Cho phép tạo chuỗi chứa "/n"
    std::cout<<"so tu trong chuoi la: "<<coutword(s)<<std::endl;
}
