/* Con trỏ Hàm
     - Phương thức sử dụng: kiểu_trả_về (*tên_con_trỏ)(danh_sách_tham_số)= hàm khai báo;
     - Lưu ý: danh sách tham số = số lượng tham số khai báo trong hàm khai báo
*/
#include <iostream>
using namespace std;

void hello() {
    cout << "Hello World!" << endl;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    // Con trỏ hàm không tham số
    void (*funcPtr1)() = hello;
    funcPtr1(); // Gọi hàm hello
    
    // Con trỏ hàm có tham số
    int (*funcPtr2)(int, int) = add;
    cout << "Tổng: " << funcPtr2(5, 3) << endl;
    
    return 0;
}