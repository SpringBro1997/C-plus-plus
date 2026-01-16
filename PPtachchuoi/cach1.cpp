#include<iostream>

//Cách 1 tách chuỗi bằng hàm for()
void str(std::string str)
{
    for (int i= 0; i< str.length(); i++)
    {
        std::cout<<str[i]<<'\n';
    }
    
};

int main()
{
    std::string str1="Hello";
    str(str1);
    int a = 200;
    return 0 ;
}