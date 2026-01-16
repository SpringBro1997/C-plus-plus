/* Xử lý ngoại lệ Try- Catch- Throw 
    👍 K/n: Xử lý ngoại lệ trong C++ là 1 ký thuật giúp chương trình bắt và xử lý các lỗi hoặc điều kiện bất thường
           xảy ra trong quá trình chạy. Điều này giúp tránh các tình huống chương trình có thể dừng đột ngột 
    👍 Từ khoá Try- Catch- Throw
        + try: Khối mã có thể gây ra lỗi sẽ được đặt trong khối try.
        + throw: Khi lỗi xảy ra, từ khoá throw sẽ 'ném' một ngoại lệ, thường là giá trị hoặc đối tượng
        + catch: Sau khi ngoại lệ được 'ném', catch sẽ bắt và xử lý nó. 
    👍 Các dạng ngoại lệ trong C++:
        + Ngoại lệ chuẩn: C++ cung cấp các lớp ngoại lệ chuẩn như std::exception, std::runtime_error, std::logic_error...
                          Bạn có thể sử dụng các lớp này để bắt các ngoại lệ thông dụng.
                          * Lớp std::exception: là lớp cha trong C++  là lớp cơ bản nhấtcho tất cả các ngoại lệ chuẩn, Bạn có thể sử dụng để bắt mọi loại ngoại lệ
                            Đây là 1 số lớp ngoại lệ chuẩn kế thừa từ std::exception
                            std::runtime: Ngoại lệ cho các lỗi xảy ra khi chương trình chạy
                            std::logic_error: Ngoại lệ cho các lỗi logic trong mã, như: std::invalid_argument
                            std::out_of_range
                            std::bad_alloc: Ngoại lệ cho các lỗi cấp phát bộ nhớ thất bại (thường từ new)
                            std::bad_cast: Ngoại lệ cho lỗi ép kiểu thất bại khi dùng dynamic_cast
                            Mỗi lớp kế thừa này đều có thể cung cấp thông tin cụ thể hơn thông qua hàm what() của riêng nó

        + Ngoại lệ tự định nghĩa: Bạn có thể định nghĩa các lớp ngoại lệ riếng để phù hợp với từng trường hợp lỗi cụ thể. Điều này hữu ích khi bạn muốn xử lý
        các tình huống đặc thù mà ngoại lệ tiêu chuẩn không đát ứng đc, giúp mã dễ hiểu, dễ bảo trì hơn.
            Cách tạo: Tạo 1 lớp mới từ lớp kế thừa std::except hoặc từ 1 lớp ngoại lệ chuẩn khác (như: std::runtime_error... )
                      Sau đó có thể nạp chồng phương thức what() để cung cấp thông báo lỗi tuỳ chỉnh               
    
    👍 Lưu ý: Khi sử dụng const và tham chiếu trong catch      
        + const: chỉ ra rằng biến e không thể bị thay đổi trong khối catch. 
                Giúp bảo vệ các đối tượng ngoại lệ không bị thay đổi không mong muốn và thông tin  ngoại lệ vẫn giữ nguyên khi bạn xử lý nó  
        + & (tham chiếu): Khia báo e là 1 tham chiếu đến đối tượng std::exception. Tham chiếu cho phép bạn truy cập trược tiếp mà không cần sao chép nó
            ví dụ: catch (const std::exception &e): tham chiếu đến std::exception e không tạo ra địa chỉ mới
                   catch (std::exception e): tạo ra 1 đối tượng (địa chỉ mới ) để sao chép đối tượng std::exception khai báo vào
        + Có thể để trống catch. Khi để trống catch chương trình sẽ bắt được ngoại lệ nhưng không làm gì cả 
            dẫn đến khó khăn trong việc chuẩn đoán lỗi hoặc gây khó hiểu khi đọc mã   catch(...)        
            - Nên sử dụng khi 
                Bỏ qua ngoại lệ không quan trọng và 
                Trong khối dọn dẹp tài nguyên: Khi bạn chỉ muốn bắt ngoại lệ để đảm bảo giải phóng tài nguyên (ví dụ: bộ nhớ, tệp tin, kết nối) mà không xử lý lỗi
        + Từ khoá "noexcept" dùng để chỉ ra 1 hàm sẽ không ném bất kỳ ngoại lệ nào.
            Khi khai báo 1 hàm với 'noexcept' bạn cam kết rằng hàm đó sẽ khống bao giờ ném ra 1 ngoại lệ.
            Điều này giúp tối ưu hoá hiệu suất chương trình do không cần thêm mã để xử lý ngoại lệ cho hàm đó
    
    👍 Các dạng mode
        + Chế độ std::ios::in : Mở tệp để đọc. Khi sử dụng nếu tệp không tồn tại 1 lỗi sẽ xảy ra, không thể ghi dữ liệu vào tệp khi mở với chế độ này == ifstream   
        + Chế độ std::ios::out: Mở tệp để ghi. Khi sử dụng nếu tệp không tồn tại sẽ tạo 1 tệp mới, ghi dữ liệu vào tệp khi mở, nội dung sẽ bị ghi đè với chế độ này == ofstream
        + Chế độ std::ios::app: Mở tệp để ghi, tất cả các dữ liệu mới được thêm vào cuối tệp hiện có, không làm mất dữ liệu hiện có trong tệp
        + Chế độ std::ios::ate: Mở tệp để đọc và ghi, đặt con trỏ vào cuối tệp ngay khi mở
                                 Có thể đọc và ghi từ bất kỳ vị trí nào trong tệp
                                 Ghi dữ liệu mới vào cuối nhưng vẫn có thể đọc từ vị trí khác
        + Chế độ std::ios::trunc: Nếu tệp tồn tại, nội dung của nó sẽ bị xoá trước khi ghi
                                  Thường được sử dụng với std::cout<<::out để đảm bảo rằng tệp bắt đầu trống trước gkhi ghi dữ liệu mới 
        + Chế độ std::ios::binary: Mở tệp ở chế độ nhị phân
                                   Khi sử dụng không thực hiện bất kỳ chuyển đổi nào đối với dữ liệu tệp (không chuyển đổi ký tự)
                                thích hợp cho việc đọc và ghi dữ liệu nhị phân                   
        + Chế độ std::ios::nocreate: Mở tệp file đã được tạo ra trước đó không thể tạo ra file mới
        + Chế độ std::ios::noreplace Không thay đổi file cũ thành file mới                                                         
*/  

/* Ngoại lệ tiêu chuẩn */
#include<iostream>

int main ()
{
    try 
    {
        int a= 5;
        int b= 0;
        if (b== 0)
        {
            //Khai báo theo char
            throw "Khong the chia duoc cho 0 \n";
        }
        int result= a/b;
        std::cout<<"value of result: "<<result<<std::endl; 
    }
    catch (const char* e)
    {
        std::cout<<"Error 1: "<<e<<std::endl;
    } 
    catch(...)
    {
        std::cout<<"Error"<<e<<std::endl;
    } 
    std::cout<<"The end of ther Programming"<<std::endl;

    return 0;
}