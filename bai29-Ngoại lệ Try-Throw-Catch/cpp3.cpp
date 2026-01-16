/* Từ khoá 'noexcept' và 'const noexcept'
    K/n 'noexcept': dùng để chỉ ra 1 hàm sẽ không ném bất kỳ ngoại lệ nào.
        Khi khai báo 1 hàm với 'noexcept' bạn cam kết rằng hàm đó sẽ khống bao giờ ném ra 1 ngoại lệ.
        Điều này giúp tối ưu hoá hiệu suất chương trình do không cần thêm mã để xử lý ngoại lệ cho hàm đó   
    Lơị ích:
        Tối ưu hoá hiệu suất: Tối ưu hoá bằng cách bỏ qua các cơ chế xử lý ngoại lệ
        Độ tin cậy: Dùng 'noexcept' giúp code dễ hiểu hơn, vì nó xác định rằng hàm an toàn và không có rủi ro ném ngoại lệ    
    
    K/n 'const noexcept': Sử dụng trong các hàm thành viên (member functions) của lớp. Kết hơp cả const và except trong khai báo hàm thành viên cho biết rằng:
        - const: Hàm không thay đổi trạng thái đối tượng
        - except: Không ném ngoại lệ 
*/
#include<iostream>
void checkvar() noexcept
{
    std::cout<<"Tu khoa ngoai le noexcept\n";
    throw "Error\n";
}
int main ()
{
    checkvar(); //Chương trình lỗi không chạy được do đã khai báo 'noexcept' nên hàm trên không thể ném
    return 0;
}