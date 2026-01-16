/* Thư viện vector */
#include<iostream>
#include<vector>

int main()
{
//Khai bao cho attribute
    std::vector<int> a; //Khai báo container rỗng
    a.push_back(10); //Sử dụng push.back() để thêm phần tử vào vị trí cuối cùng
    std::cout<<a[0]<<'\n'; //In giá trị từng phần tử của a

//Khai báo mảng
    std::vector<int> array1 (5); //Khai báo 1 mảng có 5 phần tử rỗng
    std::vector<int> array2 (5,10); //Khai báo 1 mảng có 5 phần tử đều là 10
    std::vector<int> array3= {1,2,3,4,5}; //Khai báo 1 mảng có 5 phần tử 1,2,3,4,5
    std::cout<<"Khai bao voi kieu du lieu la int"<<'\n';
    std::cout<<array3[3]<<'\n';  // In giá trị tại vị trí 3 của mảng array3
    //In toàn bộ mảng cách 1: Gọi trực tiếp
    for( int i= 0; i< array3.size(); i++)
    {
        std::cout<<array3[i]<<' ';
    }
    std::cout<<'\n';
    //In tàn bộ mảng cách 2: 
    for (int value: array3)
    {
        std::cout<<value<<' ';
    }
    

    std::cout<<'\n';
    
    std::cout<<"Khai bao voi kieu du lieu la char"<<'\n';
    std::vector<char> char1 (5);   //Khai báo mảng rỗng có 5 phần tử
    std::vector<char> char2 (5,'a');  //Khai báo mảng có 5 phần tử là a
    std::vector<char> char3 ={'a','b','c','d','e'};   //Khai báo mảng 5 phần tử a b c d e
    std::cout<<char3[3]<<'\n';
    std::cout<<'\n';
    
    std::cout<<"Khai bao voi kieu du lieu la string"<<'\n';
    std::vector<std::string> string1 (5);   //Khai báo mảng string rỗng có 5 phần tử
    std::vector<std::string> string2 (5,"dfgdfg sdfs");   // Khai báo mảng string 5 phần tử là "dfgdfg sdfs"
    std::vector<std::string> string3 ={"Anh ","Xuan ","Anh ","Dep trai"};      //Khai báo mảng 5 phần tử {"Anh ","Xuan ","Anh ","Dep trai"}
    std::cout<<string3[3]<<'\n';
    std::cout<<'\n';  

//Thêm cuối	
    array3.push_back(10); //Thêm giá trị 10 vào cuối mảng array3
//Xóa cuối	
//Truy cập	
//Chèn	    
//Xóa      	
//ìm kiếm	
//Kích thước

    return 0;
}