/* Ngoại lệ tự định nghĩa */
#include<iostream>
struct animal
{
    std::string name= "AAA";
    void insertName() const noexcept
    {
    }
};

struct AnouceError : public std::exception
{
    //virtual const char* std::exception::what() const noexcept 
    const char* what() const noexcept
    {
        return "Error roi ban nhe!!!\n";
    } 
};


int main ()
{
    try
    {
        AnouceError e;
        throw e;
    }
    catch(const AnouceError& e) // Hoặc catch (const except& e) do AnouceError làm hàm con của except
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}