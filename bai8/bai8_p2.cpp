/* Bài 10: Luyện tập
1.	Viết một chương trình C++ để nhập một chuỗi từ bàn phím và in ra màn hình độ dài của chuỗi đó.
2.	Viết chương trình C++ để nhập một số nguyên và tìm lập phương của số đó.
3.	Viết chương trình C++ để in ra màn hình số kế tiếp của số nguyên bạn vừa nhập.
4.	Viết chương trình C++ để nhắc người dùng chọn một tùy chọn. Sau đó nhắc họ nhập hai số nguyên và in kết quả tương ứng với tùy chọn đó.
5.	Viết chương trình C++ để tính giai thừa của một số nguyên dương bởi sử dụng hàm trong C++.

 */
#include <iostream>
#include <cstring>
int main ()
{
    char a[]= "sưe dwed";
    int length= strlen (a);
    std::cout<<"DO DAI CHUOI: "<<length<<std::endl;
    
    int b;
    std::cout<<"nhap so nguyen: ";
    std::cin>>b;
    char d;
    std::cout << "nhap lua chon: ";
    std::cin >> d;
    if (d == 'b')
    {
        int lapphuong = b * b * b;
        std::cout << "so lap phuong: " << lapphuong << std::endl;
    }
    else if (d== 'c')
    {
        int c = b + 1;
        std::cout << "so ke tiep so nguyen: " << c << std::endl;
    }
    int plus= 1;
    int temp=1;
    for (int i = 0; i< b; i++)
    {
        temp= plus*temp;
        plus++;
    }
    std::cout<<"so giai thua: "<<temp<<std::endl;
}
