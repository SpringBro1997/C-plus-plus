/* Tham chiếu là biến của 1 Function:
       - Hàm function được khai báo nhận giá trị tham chiếu
       - Khai báo giá trị biến ở int main() làm tham chiếu cho hàm Function: 
            + Giá trị biến khai báo trong hàm Function sẽ nhận giá trị tham chiếu của biến trong int main() 
            + Khi thay đổi giá trị biến tham chiếu trong hàm Function sẽ làm thay đổi giá trị của biến khai báo trong int main() được hàm Function nhận làm tham chiếu
*/
#include <iostream>
void Thamchieu(int &a)
{
    a= 11; //Làm thay đổi biến a trong hàm chính int main()
    std::cout<<"Tham chieu cua function Thamchieu: "<<a<<'\n';
}
int main()
{
    int a= 10;
    Thamchieu(a);
    std::cout<<"Gia tri Cua a: "<<a<<std::endl; //Giá trị của a bị thay đổi khi giá trị a trong function thay đổi 
    return 0;
}

