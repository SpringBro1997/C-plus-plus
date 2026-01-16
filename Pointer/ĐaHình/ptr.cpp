/*  
    Tính Đa Hình
    -K/n: 
        Tính đa hình (Polymorphism) trong C++ cho phép 1 hàm hoặc phương thức hoạt động khác nhau dựa
        trên đối tượng mà nó đang được gọi. Đặc điểm này chủ yếu được thực hiện thông qua:
            
            + Phương thức ảo thông thường: Phương thức có từ khoá "virtual", nhưng không phải là phương thức ảo thuần tuý
                - K/n:Cho phép lớp dẫn xuất (lớp con) ghi đè phương thức từ lớp cơ sở (lớp cha), nhưng lớp cơ sở vẫn có thể được khởi tạo và sử dụng
            
            + Phương thức ảo thuần tuý: Phương thức được khai báo bằng cách sử dụng 
            cú pháp "virtual void methodName() =0; - Không có định nghĩa trong lớp cơ sở (lớp cha)
                - K/n: Yêu cầu lớp dẫn xuất (Lớp con ) phải ghi đè phương thức này, đồng thời biến lớp cơ sở (lớp cha) thành lớp trừu tượng (abstract), không thể khởi tạo trực tiếp 

 */

#include<iostream>

struct Animal //Struct cơ sở (cha)
{
    public:
    // Phương thức ảo thông thường
    virtual void sleep()
    {
        std::cout<<"Animal are Sleeping\n";
    }
};

//struct dẫn xuất (con)
struct Dog: public Animal
{
    // Sử dụng cú pháp override để ghi đè
    void sleep() override
    {
        std::cout<<"Dog is sleeping\n";
    }
};


int main()
{
    Animal a;
    Dog b;
    a.sleep();
    b.sleep();

    //Khai báo địa chỉ con trỏ thuộc lớp cơ sở
    Dog *ptr= nullptr;
    ptr= new Dog[3];
    delete[] ptr;



    return 0;
}