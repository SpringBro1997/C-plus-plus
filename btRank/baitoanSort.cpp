#include <iostream>

/* Ví dụ: Tìm Phần Tử Xếp Theo Thứ Tự Tăng Dần
    Yêu Cầu:
        1. Sắp xếp mảng theo thứ tự tăng dần.
    Ví Dụ:
        • Đầu Vào:
            o Mảng: {5, 3, 8, 1, 4}
        • Đầu Ra:
            o Mảng sau khi sắp xếp: {1, 3, 4, 5, 8}
*/
int main()
{
    /* Phuong pháp Selection Sort
        Mô tả:
            Tìm phần tử nhỏ nhất trong mảng và hoán đổi nó với phần tử đầu tiên.
            Lặp lại quá trình cho đến khi toàn bộ mảng được sắp xếp.
     */
    int Selection_Sort[] = {5, 3, 8, 1, 4};
    int length_SelectionSort = sizeof(Selection_Sort) / sizeof(Selection_Sort[0]);
    for (int i = 0; i < length_SelectionSort; i++)
    {
        int index = i;
        for (int j = i + 1; j < length_SelectionSort; j++)
        {
            if (Selection_Sort[index] > Selection_Sort[j])
            {
                index = j;
            }
        }
        int temp = Selection_Sort[i];
        Selection_Sort[i] = Selection_Sort[index];
        Selection_Sort[index] = temp;
    }
    for (int i = 0; i < length_SelectionSort; i++)
    {
        std::cout << "mang moi: " << Selection_Sort[i] << std::endl;
    }

    /* Phuong pháp Bubble Sort
        Mô tả:
            So sánh từng cặp phần tử liền kề và hoán đổi chúng nếu chúng không theo thứ tự.
            Lặp lại quá trình cho đến khi không còn phần tử nào cần hoán đổi.
     */

    /* Phuong pháp Insertion Sort
        Mô tả:
            Chia mảng thành hai phần: phần đã sắp xếp và phần chưa sắp xếp.
            Lấy từng phần tử từ phần chưa sắp xếp và chèn vào vị trí thích hợp trong phần đã sắp xếp.
     */
}

/*  Bài Tập Tổng Hợp: Quản Lý Điểm Số
    Mô Tả: Viết một chương trình để quản lý điểm số của một lớp học. Chương trình sẽ thực hiện các chức năng như nhập điểm cho học sinh, tính điểm trung bình, tìm điểm cao nhất và thấp nhất, và sắp xếp điểm số theo thứ tự tăng dần.
    Yêu Cầu:
    1.	Nhập Điểm: Nhập điểm số cho một số lượng học sinh nhất định.
    2.	Tính Điểm Trung Bình: Tính điểm trung bình của tất cả học sinh.
    3.	Tìm Điểm Cao Nhất và Thấp Nhất: Xác định điểm cao nhất và thấp nhất trong danh sách.
    4.	Sắp Xếp Điểm: Sắp xếp điểm số theo 	thứ tự tăng dần.
    Phân Tích:
    1.	Nhập Điểm: Chương trình yêu cầu người dùng nhập số lượng học sinh và sau đó nhập điểm cho từng học sinh.
    2.	Tính Điểm Trung Bình: Tính điểm trung bình bằng cách cộng tổng điểm và chia cho số lượng học sinh.
    3.	Tìm Điểm Cao Nhất và Thấp Nhất: Duyệt qua mảng để tìm điểm cao nhất và thấp nhất.
    4.	Sắp Xếp Điểm: Sử dụng thuật toán sắp xếp nổi bọt (bubble sort) để sắp xếp điểm theo thứ tự tăng dần.
    Test Case 1: Dữ Liệu Thực Tế Đơn Giản
    Đầu Vào:
    Nhập số lượng học sinh (tối đa 10): 5
    Nhập điểm cho học sinh 1: 8.5
    Nhập điểm cho học sinh 2: 7.0
    Nhập điểm cho học sinh 3: 9.0
    Nhập điểm cho học sinh 4: 6.5
    Nhập điểm cho học sinh 5: 7.5
    Đầu Ra:
    Điểm trung bình: 7.9
    Điểm cao nhất: 9.0
    Điểm thấp nhất: 6.5
    Danh sách điểm theo thứ tự tăng dần:
    6.5 7.0 7.5 8.5 9.0
    Test Case 2: Dữ Liệu Với Điểm Giống Nhau
    Đầu Vào:
    Nhập số lượng học sinh (tối đa 10): 4
    Nhập điểm cho học sinh 1: 8.0
    Nhập điểm cho học sinh 2: 8.0
    Nhập điểm cho học sinh 3: 8.0
    Nhập điểm cho học sinh 4: 8.0
    Đầu Ra:
    Điểm trung bình: 8.0
    Điểm cao nhất: 8.0
    Điểm thấp nhất: 8.0
    Danh sách điểm theo thứ tự tăng dần:
    8.0 8.0 8.0 8.0
    Test Case 3: Dữ Liệu Với Điểm Cực Tốp và Cực Đoan
    Đầu Vào:
    Nhập số lượng học sinh (tối đa 10): 3
    Nhập điểm cho học sinh 1: 100.0
    Nhập điểm cho học sinh 2: 0.0
    Nhập điểm cho học sinh 3: 50.0
    Đầu Ra:
    Điểm trung bình: 50.0
    Điểm cao nhất: 100.0
    Điểm thấp nhất: 0.0
    Danh sách điểm theo thứ tự tăng dần:
    0.0 50.0 100.0
    Test Case 4: Dữ Liệu Với Số Học Sinh Tối Thiểu
    Đầu Vào:
    Nhập số lượng học sinh (tối đa 10): 1
    Nhập điểm cho học sinh 1: 75.0
    Đầu Ra:
    Điểm trung bình: 75.0
    Điểm cao nhất: 75.0
    Điểm thấp nhất: 75.0
    Danh sách điểm theo thứ tự tăng dần:
    75.0
    Test Case 5: Dữ Liệu Với Số Học Sinh Tối Đa
    Đầu Vào:
    Nhập số lượng học sinh (tối đa 10): 10
    Nhập điểm cho học sinh 1: 90.0
    Nhập điểm cho học sinh 2: 80.0
    Nhập điểm cho học sinh 3: 70.0
    Nhập điểm cho học sinh 4: 60.0
    Nhập điểm cho học sinh 5: 50.0
    Nhập điểm cho học sinh 6: 40.0
    Nhập điểm cho học sinh 7: 30.0
    Nhập điểm cho học sinh 8: 20.0
    Nhập điểm cho học sinh 9: 10.0
    Nhập điểm cho học sinh 10: 0.0
    Đầu Ra:
    Điểm trung bình: 45.0
    Điểm cao nhất: 90.0
    Điểm thấp nhất: 0.0
    Danh sách điểm theo thứ tự tăng dần:
    0.0 10.0 20.0 30.0 40.0 50.0 60.0 70.0 80.0 90.0
    Lưu Ý:
    •	Đảm bảo rằng các giá trị đầu vào là hợp lệ và nằm trong phạm vi được chỉ định.
    •	Chạy các test case này với chương trình của bạn để đảm bảo rằng tất cả các chức năng đều hoạt động như mong đợi và đầu ra là chính xác.
    */
    int main(){
        int value_student;
        std::cout << "Nhap so hoc sinh: ";
        std::cin >> value_student;
        std::string student, name_max, name_min;
        float point[value_student];
        float min_point = 99;
        float sum_point, max_point = 0;

        // Sử dụng hàm For để chèn giá trị vào vòng lặp lập bảng điểm theo số lượng học sinh (tương ứng với giá trị đầu vào bao nhiêu học sinh )
        for (int i = 0; i < value_student; i++)
        {
            // Nhập dữ liệu tên va điểm học sinh
            std::cout << "Nhap ten hoc sinh: ";
            std::cin >> student;
            std::cout << "Nhap so diem: ";
            std::cin >> point[i];
            std::cout << "Ho va ten: " << student << std::endl;
            std::cout << "diem so: " << point[i] << std::endl;

            // Tính tổng point
            sum_point = sum_point + point[i];

            // Tìm giá trị point lớn nhất và bé nhất
            if (max_point < point[i])
            {
                max_point = point[i];
                name_max = student;
            }
            if (min_point > point[i])
            {
                min_point = point[i];
                name_min = student;
            }
        }
        // Tạo biến tạm
        int temp;

        // Sắp xếp điểm số nhập vào theo thứ tự:
        std::cout << "So diem duoc sap xep theo thu tu tang dan: ";
        for (int i = 0; i < value_student; i++)
        {
            for (int j = i + 1; j < value_student; j++)
            {
                // Theo thứ tự tăng dần
                if (point[i] > point[j])
                {
                    temp = point[i];
                    point[i] = point[j];
                    point[j] = temp;
                }
            }
            std::cout << " " << point[i];
        }
        std::cout << std::endl;

        float average_student = sum_point / value_student;
        std::cout << "Tong diem cua " << value_student << " hoc sinh" << " : " << sum_point << std::endl;
        std::cout << "Diem trung binh cua " << value_student << " hoc sinh" << " : " << average_student << std::endl;
        std::cout << "Ban " << name_max << " dat so diem cao nhat la " << max_point << std::endl;
        std::cout << "Ban " << name_min << " dat so diem thap nhat la " << min_point << std::endl;
    }