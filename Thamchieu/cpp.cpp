/* Tham chiếu 
    - K/n: Tham chiếu là một bí danh (alias) cho một biến đã tồn tại. 
           Khi bạn khai báo một tham chiếu, nó tham chiếu đến cùng một vùng nhớ với biến mà nó được gán.
           Chỉ tạo ra 1 địa chỉ cho biến không làm mất thêm bộ nhớ để khởi tạo biến khác
    - Cú pháp: <kiểu_dữ_liệu> &<tên_tham_chiếu> = <tên_biến>;       
    - Tham chiếu biến (attribute):
        + Biến thường: Giá trị của biến tham chiếu làm thay đổi giá trị của biến được tham chiếu
        + Biến hằng: Giá trị của biến được tham chiếu không làm thay đổi được giá trị của biến tham chiếu
    - Tham chiếu mảng   (tương tự đối với biến) 
    - Tham chiếu trong hàm
    - Quy tắc:
        ✅ ĐƯỢC: Trả về tham chiếu đến:
            Biến toàn cục
            Biến tĩnh (static)
            Tham số tham chiếu
            Phần tử của mảng/vector
            Thành viên của đối tượng tồn tại lâu hơn hàm
        ❌ KHÔNG ĐƯỢC: Trả về tham chiếu đến:
            Biến cục bộ của hàm
            Biểu thức tạm thời
            Biến sẽ bị hủy khi hàm kết thúc
    - Ý nghĩa:
        ✅ HIỆU NĂNG: Tránh sao chép dữ liệu không cần thiết
        ✅ AN TOÀN: Không thể NULL, phải khởi tạo ngay
        ✅ TỰ NHIÊN: Cú pháp gọn gàng, dễ đọc
        ✅ LINH HOẠT: Cho phép hàm thay đổi nhiều biến
        ✅ ĐA HÌNH: Duy trì tính đa hình với đối tượng lớn
        ✅ BẢO VỆ: const reference bảo vệ dữ liệu gốc        
*/