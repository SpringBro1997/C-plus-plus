#include <iostream>
#include <iomanip> // Thư viện cần thiết cho std::setprecision

/*Bài Tập 1: In Thông Tin Người Dùng
    Viết một chương trình yêu cầu người dùng nhập mã số id và tuổi của họ, sau đó in ra thông tin này.o Yêu Cầu :
    Sử dụng cin để nhập dữ liệu từ người dùng.
    Sử dụng cout để xuất thông tin ra màn hình */
    /*int main () {
        int ID;
        uint16_t Age;
        std::cout << "Insert ID: " ;
        std::cin >> ID;
        std::cout << "Insert Age: " ;
        std::cin >> Age;
        std::cout <<"Ma ID: "<<ID<<std::endl;
        std::cout <<"Tuoi: " << Age << std::endl;
    }
    */

/*2. Phép Toán Cơ Bản
    •	Bài Tập 2: Tính Toán
    o	Viết một chương trình yêu cầu người dùng nhập hai số nguyên, sau đó tính và in ra tổng, hiệu, tích và thương của hai số đó.
    o	Yêu Cầu:
    	Sử dụng các phép toán cơ bản (+, -, *, /).
    	Xử lý trường hợp chia cho 0 để tránh lỗi.
    */
/*     int main(){
    int a;
    int b;
    std::cout << "Nhap so a :";
    std::cin >> a;
    std::cout << "Nhap so b :";
    std::cin>>b;
    int sum = a + b;
    int minus = a - b;
    int multiply = a * b;
    if (b != 0){
      int divine = a / b;
      std::cout << "Sum=: " << sum << std::endl;
      std::cout << "Minus=: " << minus << std::endl;
      std::cout << "Multiply=: " << multiply << std::endl;
      std::cout << "Divine=: " << divine << std::endl;
    } else{
      std::cout<<"nhap lai b= ";
      std::cin>>b;
      int divine = a / b;
      std::cout << "Sum=: " << sum << std::endl;
      std::cout << "Minus=: " << minus << std::endl;
      std::cout << "Multiply=: " << multiply << std::endl;
      std::cout << "Divine=: " << divine << std::endl;
    }
    }  */

  
  

/*•	Bài Tập 3: Tính Diện Tích
       o   Viết một chương trình sử dụng hằng số để tính diện tích của một hình chữ nhật dựa trên chiều dài và chiều rộng nhập từ người dùng.
       o   Yêu Cầu:
          Định nghĩa một hằng số cho chiều dài và chiều rộng.
          Tính diện tích và in kết quả ra màn hình.
    */
/*    int main(){
    const int height= 20;
    const int width= 10;
    int area= height*width;
    std::cout << "Area:= "<<area;
   } */

/*     • Bài Tập 4 : Kiểm Tra Số Chẵn Lẻ
 o Viết một chương trình yêu cầu người dùng nhập một số nguyên và kiểm tra xem số đó là số chẵn hay số lẻ.o Yêu Cầu :
 Sử dụng câu lệnh điều kiện(if - else)
 In ra kết quả kiểm tra. */
/*   int main(){
  int number;
  int remainder= number/2;
  std::cout<<"Nhap so number: ";
  std::cin>> number;
  if (remainder == 0)
  {
    std::cout << "Number is EVEN NUMBER" << std::endl;
    ;
  } else{
    std::cout<<"Number is ODD NUMBER"<<std::endl;
  }
  } */

  /* •	Bài Tập 5: Tính Trung Bình
o	Viết một chương trình yêu cầu người dùng nhập ba số thực và tính toán trung bình của chúng.
o	Yêu Cầu:
	Sử dụng kiểu dữ liệu float hoặc double để lưu trữ số thực.
	In kết quả trung bình ra màn hình.
 */
/* int main(){
  float a;
  float b;
  float c;
  std::cout<<"Nhap so a: ";
  std::cin>>a;
  std::cout << "Nhap so b: ";
  std::cin >> b;
  std::cout << "Nhap so c: ";
  std::cin >> c;
  std::cout << std::fixed << std::setprecision(10) ; //thêm giới hạn chữ số thập phân lên 10
  double average = (a + b + c) / 3;
  float average1 = (a+b+c)/3;
  std::cout<<"trung binh 3 so theo float: "<< average<<std::endl;
  std::cout<<"trung binh 3 so theo double: "<< average1<<std::endl; */

  /* •	Bài Tập 6: Đặt Tên Biến Hợp Lý
  o	Viết một chương trình sử dụng các biến với tên rõ ràng, theo quy tắc camel case hoặc snake case. Chương trình sẽ tính tổng và trung bình của ba số và in kết quả.
  o	Yêu Cầu:
  	Đặt tên biến sao cho dễ hiểu và thể hiện rõ mục đích của biến.
   */

  /* •	Bài Tập 7: Tính Tổng và Trung Bình Của Hai Số Thực
o	Viết một chương trình yêu cầu người dùng nhập hai số thực, sau đó tính tổng và trung bình của hai số đó.
o	Yêu Cầu:
	Sử dụng kiểu dữ liệu float hoặc double để lưu trữ số thực.
	In kết quả tổng và trung bình ra màn hình.
 */
/*   int main()
  {
    float a;
    float b;
    float c;
    std::cout << "Nhap so a: ";
    std::cin >> a;
    std::cout << "Nhap so b: ";
    std::cin >> b;
    std::cout << "Nhap so c: ";
    std::cin >> c;
    float sum = a + b + c;
    std::cout << "tong 3 so = " << sum << std::endl;
    double sum1 = a + b + c;
    std::cout << "tong 3 so = " << sum1 << std::endl;
    std::cout << std::fixed << std::setprecision(10); // thêm giới hạn chữ số thập phân lên 10
    double average = sum1 / 3;
    float average1 = sum / 3;
    std::cout << "trung binh 3 so theo float: " << average << std::endl;
    std::cout << "trung binh 3 so theo double: " << average1 << std::endl; */

    /* •	Bài Tập 8: Tính Diện Tích và Chu Vi
o	Viết một chương trình yêu cầu người dùng nhập bán kính của một hình tròn, sau đó tính và in ra diện tích và chu vi của hình tròn.
o	Yêu Cầu:
	Sử dụng const để định nghĩa giá trị của π (pi).
	Sử dụng công thức diện tích A = π * r^2 và chu vi C = 2 * π * r.
 */
int main(){
  float R;
  const float pi= 3.14;
  std::cout << "Insert cycle radius: ";
  std::cin>>R;
  float perimeter_C = 2 *pi *R ;
  float acreage_A = pi* R* R;
  std::cout << "Insert cycle radius: " << perimeter_C<<std::endl;
  std::cout << "Insert cycle radius: " << acreage_A;
}
  
