#include <iostream>
#include <string>
void truth (std::string value);
int main ()
{
    //nhập giá trị chuỗi
    std::string s;
    std::getline (std::cin, s);

    //truyền giá trị chuỗi s vào hàm truth
    truth(s);
}
void truth(std::string value)
{
    for (int i= 0; i< value.length(); i++) // value.length số lượng ký tự trong chuỗi
    {
        // lấy giá trị tại vị trí đầu tiên và thứ 2 lần lượt là 3-0 và 2-9
        if (value[0]=='3' && value[1]== '0')
        {
            std::cout<<"yes"<<std::endl;
            break;
        }
        else if (value[0]== '2' && value[1]== '9')
        {
            std::cout << "yes" << std::endl;
            break;
        }
        else 
        { std::cout<<"No"<<std::endl;
            break;
        }
         
    }
    
}