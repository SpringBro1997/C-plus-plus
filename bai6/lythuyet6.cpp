/* Mảng - Array
    * Mảng là cấu trúc dữ liệu lưu trữ nhiều giá trị cùng loại trong một biến duy nhất. Mảng giúp tổ chức dữ liệu và truy cập dễ dàng, đặc biệt hữu ích khi làm việc với nhiều giá trị giống nhau.
          - Khai báo khởi tạo đồng thời: float array[5]= {1,2,3,4,5};
          - Khai báo khởi tạo sau: float array[5];
                                   array[0]=1;
                                   array[1]=2;
                                   array[2]=3;
                                   array[3]=4;
                                   array[4]=5;
          - Lấy dữ liệu từ trong mảng: int arr[5] = {10, 20, 30, 40, 50};
                                       cout << arr[0]; // In ra 10
          - Mảng 2 chiều: array[row][colum]: int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
                                             cout << matrix[1][2]; // In ra 6
    * Mảng trong bộ nhớ
    * Mảng ký tự và mảng string:
        * Mảng Ký Tự (Character Arrays): char str[] = "Hello";
    * Mảng Ký Tự: Quản lý bộ nhớ thủ công, đảm bảo mảng ký tự kết thúc bằng ký tự null ('\0').
        * Lưu ý: '\0' Quan Trọng?
        	Đánh Dấu Kết Thúc Chuỗi: Ký tự '\0' đánh dấu điểm kết thúc của chuỗi ký tự. Các hàm xử lý chuỗi dựa vào '\0' để biết khi nào dừng đọc chuỗi

*/

#include <iostream>
#include <cstring> // thư việc sử dụng string len- độ dài chuỗi

int main (){

    /* Ex1: Khai báo một mảng số nguyên có kích thước 10 và khởi tạo tất cả các phần tử bằng cách sử dụng vòng lặp for. In ra các phần tử của mảng. */
    int ex_1[10];
    for (int i = 0; i < 10; i++){
        ex_1[i]=10;
    }
    for (int i = 0; i < 10; i++){
        std::cout << "day so: " << ex_1[i] << std::endl;
    }

    /* Ex_2: Khai báo một mảng ký tự với 10 phần tử và khởi tạo mảng bằng các ký tự khác nhau (như 'A', 'B', 'C', v.v.). Viết một chương trình để in ra tất cả các ký tự trong mảng. */
    char ex_2[10] = {'A', 'B', 'C', 'd','^','r','t','1','0'};
    for (int i = 0; i < 10; i++){
        std::cout<<"ky tu: "<<ex_2[i]<<std::endl;
    }

    /* Ex_3: 1.	Viết một chương trình để truy cập và in ra phần tử ở vị trí giữa của một mảng số nguyên có kích thước lẻ (ví dụ: 7 phần tử).
                    thay đổi giá trị của một phần tử ở chỉ số 3 của một mảng số thực. In ra toàn bộ mảng sau khi thực hiện thay đổi*/
    int ex_3[5]= {1,2,3,4,5};
    std::cout<<"Phan tu o giua = "<<ex_3[2]<<std::endl;
        //thay đổi
        ex_3[2]= 9;
        for (int i = 0; i < 5; i++)
        {
            std::cout<<"day so moi: "<<ex_3[i]<<std::endl;
        }

    /* Ex 4: 1.	Tạo một mảng hai chiều 3x3 và khởi tạo nó với các giá trị từ 1 đến 9. Viết một chương trình để in ra toàn bộ ma trận theo định dạng bảng. */
        int ex_4[3][3]= {
            {1,2,3},       
            {4,5,6},            
            {7,8,9}  };      
        std::cout << ex_4[0][0] << std::endl;    // in ra vị trí hàng 1 cột 1 -> 1
        std::cout << ex_4[0][2] << std::endl;   // in ra vị trí hàng 1 cột 1 -> 3
        std::cout << ex_4[1][2] << std::endl;  // in ra vị trí hàng 1 cột 1 -> 6
        for (int i = 0; i < 3; i++)
        {
            for (int k = 0; k < 3; k++)
            {
                std::cout<<" "<<ex_4[i][k];
            }
            std::cout<<std::endl;
        }

    /* Ex 5. Viết một chương trình để tính tổng của tất cả các phần tử trong một mảng hai chiều 2x4. In ra tổng và ma trận */
        int ex_5[2][4]={
            {1,2,3,4},
            {5,6,7,8}};
        int sum = 0;    
        for (int i = 0; i < 2; i++)
        {
            for (int k = 0; k < 4; k++)
            {
                sum= ex_5[i][k]+sum;
            };
        }std::cout<<sum<<std::endl;

    /* • Ví dụ về Mảng Ký Tự Không Có '\0' : */
        char str[6] = {'H', 'e', 'l', 'l', 'o', ' '}; // Không có ký tự '\0' ở cuối
            // In ra mảng ký tự
            std::cout << "Mảng ký tự không có '\\0': ";
            for (int i = 0; i < 6; ++i)
            {
               std:: cout << str[i];
            }
            std::cout << std::endl;
            // Tính chiều dài của chuỗi
            // Đây có thể gây ra hành vi không xác định vì không có ký tự '\0'
            std::cout << "Chiều dài của chuỗi: " << std::strlen(str) <<std:: endl;
            return 0;

    /* Ex_7: Viết một chương trình để khởi tạo một mảng ký tự với một chuỗi ký tự và sau đó in ra chuỗi ký tự đó.
             Thực hiện điều này cả với ký tự '\0' và không có ký tự '\0' để thấy sự khác biệt. */
        char ex_7[4] = {'a', 'd', '2', '/'};
        for (int i = 0; i < 5; ++i)
            {
            std::cout << "ex_7: " << ex_7[i];
}
}
