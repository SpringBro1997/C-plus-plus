//Cách 2: Sử dụng vector
#include <iostream>
#include <vector>

void str(std::string name1)
{
    for (char vector: name1)
    {
        std::cout<<vector<<std::endl;
    };
    
};

int main()
{
    std::string name="Hello";
    str(name);
    return 0;
}

