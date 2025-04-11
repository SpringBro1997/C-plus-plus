/* Bài 8: Tham Chiếu, Phạm Vi Biến, Namespace, và Vòng Lặp Kiểu Phạm Vi trong C++ */

#include <iostream>
int g= 10; //global
int h= 50; //global
//Khai báo không gian tên First
namespace first{
   int k= 20;
}    
int main()
{
    
    // Tham chiếu( Reference )
    // Cú pháp cơ bản
    int a = 5;                                                                        // Biến a
    int &ref = a;                                                                     // Tham chiếu ref đến biến a
    std::cout << "Giá trị của a: " << a << std::endl;                                 // In ra 5
    std::cout << "Giá trị qua tham chiếu ref: " << ref << std::endl;                  // In ra 5
    ref = 10;                                                                         // Có thể thay đổi giá trị của biến qua tham chiếu nhưng không thể đổi biến a-> b của tham chiếu  
    std::cout << "Giá trị của a sau khi thay đổi qua ref: " << a << std::endl;        // In ra 10
    std::cout << "Giá trị qua tham chiếu ref sau khi thay đổi: " << ref << std::endl; // In ra 10
/* Ví dụ 1:
        . Tạo một chương trình C++ với hai biến số nguyên, x và y, y là tham chiếu ref để tham chiếu đến x.
        . Sử dụng tham chiếu ref để thay đổi giá trị của x. In ra giá trị của x và y trước và sau khi thay đổi thông qua ref.
*/
    int x= 5;
    int& y= x;
    std::cout<< "gia tri cua x: "<<x<<std::endl;  
    std::cout<< "gia tri cua y: "<<y<<std::endl;
    y= 100;
    std::cout<<" gia tri cua x sau khi bi thay doi: "<<x<<std::endl;
    std::cout<< "gia tri cua y: "<<y<<std::endl;

/* Ví dụ 2:
        . Viết một chương trình C++ có hai biến số thực, num1 và num2, num2 là tham chiếu refNum để tham chiếu đến num1.
        . Sử dụng refNum để nhân đôi giá trị của num1. In ra giá trị của num1 và num2 trước và sau khi thay đổi thông qua refNum.
*/
    float num1= 19.8; 
    float& num2= num1;
    std::cout<<"Num1= "<<num1<<std::endl;
    std::cout<<"Num2= "<<num2<<std::endl;
    num2= 120.254;
    std::cout << "thay doi Num1= " << num1 << std::endl;
    std::cout << "thay doi Num2= " << num2 << std::endl;
    
// Phạm vi biến( Variable Scope)
    std::cout<<g<<std::endl; //In ra biến toàn cục (global)
    int h= 99; // Khai báo biến h (biến cục bộ- local) trùng với biến toàn cục h -> ưu tiên lấy giá trị biến cục bộ 
    std::cout<<"Gia tri bien cuc bo h "<<h<<std::endl;
    std::cout<<"Gia tri bien toan cuc h "<<::h<<std::endl; // In ra giá trị biến toàn cục

//Không gian tên( Name Space) 
std::cout<<"in gia tri khong gian ten First: "<<first::k<<std::endl; // cách 1 để gọi giá trị không gian tên First
using namespace first;
std::cout<<"in gia tri khong gian ten First: "<<k<<std::endl; // cách 2 để gọi giá trị không gian tên First sử dụng using namespace

// Vòng Lặp Kiểu Phạm Vi (Range-Based For Loop)
int ages[6] = {15, 18, 20, 22, 19, 17};
int count = 0;
// Vòng lặp kiểu phạm vi để đếm số phần tử
for (int age : ages) //Tham chiếu mảng
{
    count++; // đếm số lượng phần tử trong mảng age và mảng ages
    std::cout<<" "<< age;
}
std::cout<<std::endl;
std::cout << "Số lượng phần tử trong mảng ages: " << count << std::endl; // In ra số lượng

return 0;

}
/* Bài Tập 1:
Viết một chương trình C++ khai báo một mảng scores chứa 5 số nguyên: 85, 90, 78, 92, 88.
Sử dụng vòng lặp kiểu phạm vi để in tất cả các giá trị trong mảng scores.
Bài Tập 2:
Viết một chương trình C++ khai báo một mảng temperatures chứa 4 số thực: 23.5, 25.0, 22.8, 24.3.
Sử dụng vòng lặp kiểu phạm vi để tính tổng của tất cả các giá trị trong mảng temperatures và in tổng ra màn hình.
Bài Tập 3:
Viết một chương trình C++ khai báo một mảng numbers chứa 5 số nguyên: 1, 2, 3, 4, 5.
Sử dụng vòng lặp kiểu phạm vi để thay đổi giá trị của mỗi phần tử trong mảng numbers thành giá trị gấp đôi giá trị hiện tại của nó.
In tất cả các giá trị của mảng sau khi thay đổi.
Bài Tập 4:
Viết một chương trình C++ khai báo một mảng values chứa 4 số thực: 10.0, 20.5, 30.8, 40.3.
Sử dụng vòng lặp kiểu phạm vi để giảm giá trị của mỗi phần tử trong mảng values xuống 5.0.
In tất cả các giá trị của mảng sau khi giả
*/
# include <iostream>
# include <string>
using namespace std ;
int main (){    
    int arr1[]={85, 90, 78, 92, 88};
    for ( int var:arr1){
        cout << var<< endl;
        }
    float sumvar= 0;
    float arr2[]={23.5, 25.0, 22.8, 24.3};
    for ( float var:arr2){
        sumvar= var+ sumvar;    
        }
        cout <<sumvar<< endl;
    int arr3[]={1, 2, 3, 4, 5};
    for ( int var:arr3){
        var=var*2;
        cout << var<< endl;
        }
    float arr4[]={10.0, 20.5, 30.8, 40.3};
    for ( float var:arr4){
        var=var-5;
        cout << var<< endl;
        }
}
