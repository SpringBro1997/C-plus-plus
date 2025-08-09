/*Kiểu dữ liệu
    1. Kiểu dữ liệu char: . lưu trữ ký tự, 
                          . kích thước 1 byte= 8bit
                          . lưu trữ dưới dạng bảng mã ASCII 
    2. Kiểu dữ liệu string:  . lưu chuỗi ký tự
                             . nhiều char 
    3. Kiểu dữ liệu toán tử: ==, <=, >=   
  * Ép kiểu dữ liệu
      1. C-style cast       
      2. Static cast      
  * Xử lý bộ đệm
    nhập sai kiểu dữ liệu hoặc nhiều giá trị std::cin
  * Sử dụng std::getline để đọc dòng   
*/

# include <iostream>
# include <limits> //thêm thư việm limits
# include <string> //thêm thư viện string

int main(){
   
   /*Kiểu dữ liệu char*/
     char a= '2'; //chỉ có thể sử dung dấu '' cho char
     std::cout<<a<<std::endl;
     char b = 1;//dịch sang bảng mã ASCII ứng với từ 0 đến 244 số nguyên
     std::cout << b << std::endl;
  
   /*Kiểu dữ liệu string*/
    std::string char_name= "duong xuan anh";
    std::cout<<char_name<<std::endl;
   
   /*Kiểu dữ liệu toán tử*/
    int c= 3;   
    int d= 4;
    bool ketqua= c<d; //Giá trị bool trả về true - flase 1-0
    std::cout<<"c < d True or Flase: "<<ketqua<<std::endl;  
    std::cout<<"c < d khong "<<(c<d)<<std::endl;
    std::cout<<"c > d khong "<<(c>d)<<std::endl;
    std::cout<<"c # d khong "<<(c!=d)<<std::endl;
    std::cout<<"c = d khong "<<(c==d)<<std::endl;
      
      //so sánh kiểu dữ liệu char
        int q= 'a'; //lấy giá tri trong bảng mã ASCII -> 97
        int w = 'b'; // lấy giá tri trong bảng mã ASCII -> 98
        bool sosanh= (a == b);
        std::cout<<"q co giong w khong? "<< sosanh<<std::endl;
      //so sánh kiểu chuỗi string
        std::string r= "xuan";//so sánh từng ký tự trong bảng mã ASCII 120 117 97
        std::string t = "xuun"; // so sánh từng ký tự trong bảng mã ASCII 120 117 117
        bool sosanh1= (r != t);
        bool sosanh2= (r <= t); // 97 < 117
        std::cout<<"r khac t?: "<< sosanh1<<std::endl;
        std::cout<<"r <= t?: "<< sosanh2<<std::endl;
   
   // C-style cast
    float f= 9.5;
    int result = (int) f;// 9
    char result1 = (char) f;// 9-> trống bảng mã ascii
    std::cout<<"variable result "<<f<<std::endl;
    std::cout<<"variable result "<<result<<std::endl;
    std::cout<<"variable result "<<result1<<std::endl;
   
   //Static cast
    float k = 100.5;
    int result2 = static_cast <int> (k);    // 9
    char result3 = static_cast <char> (k);  // 9-> trống bảng mã ascii
    int test= static_cast <int> ('r');
    std::cout << "variable result " << k << std::endl;
    std::cout << "variable result " << result2 << std::endl;
    std::cout << "variable result " << result3 << std::endl;
    std::cout << "variable result " << test << std::endl;

   /* Ví dụ: Viêt chương trình nhập tuổi và điểm số
               xuất dữ liệu ra ngoài màn hình */ 
               int age;
               float point;
               std::cout<<"Insert Age: ";
               std::cin>>age;
              
              //câu lệnh kiểu tra đã nhập đúng kiểu dữ liệu hay không 
               std::cout<<"ban da nhap dung kieu du lieu chua?: "<<std::cin.fail()<<std::endl;
              // Nếu chưa đúng sẽ trả về 1 và ngược lại trả về 0
              
              //Cách sử lý bộ đệm
              std::cin.clear(); //xoá thông báo nhập sai kiểu dữ liệu trong bộ đệm- std::cin.fail()
              std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // xoá giá trị trong bộ đệm ví dụ 18.9 bộ đệm là 0.9
                                                                                  // std::numeric_limits<std::streamsize>::max() xoá tối đa ký tự trong bộ đệm
                                                                                  // std::cin.ignore(9, '\n') -> xoá 9 ký tự trong bộ đệm
              std::cout << "Insert Ponit Math: ";
              std::cin >> point;
              std::cout << "diem cua ban la: " << point << std::endl;
              std::cout << "tuoi cua ban la: " << age << std::endl;

              std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

              // viết hàm đọc tên
            
              std::string fullname;
              std::cout << "Insert full name: ";
              std::getline(std::cin, fullname);
              std::cout << "Full name: " << fullname << std::endl;
              return 0;
}