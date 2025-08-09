#include <iostream>
#include <limits>
#include <numeric>
#include <string>

/* Xử Lý Dữ Liệu Cơ Bản Với Vòng Lặp
Mô Tả Bài Tập
Viết một chương trình C++ yêu cầu người dùng nhập một dãy số nguyên dương. Chương trình sẽ thực hiện các nhiệm vụ sau:
1.	Tính Tổng và Trung Bình Cộng:
       - Tính tổng của tất cả các số nguyên dương người dùng nhập vào.
       - Tính trung bình cộng của các số này.
2.	Tìm Số Lớn Nhất và Số Nhỏ Nhất:
       - Tìm số lớn nhất và số nhỏ nhất trong dãy số.
       -Sử dụng code: float maxNum = std::numeric_limits<float>::min();
                      float minNum = std::numeric_limits<float>::max();
3.	Xác Định Số Chẵn và Số Lẻ:
        - Đếm số lượng các số chẵn và số lẻ trong dãy số.
4.	Tính Tổng Các Số Từ 1 Đến N:
        - Yêu cầu người dùng nhập một số nguyên dương N, sau đó tính tổng của tất cả các số từ 1 đến N.
5.	Kết Thúc Nhập Số:
        - Người dùng có thể nhập số 0 để kết thúc quá trình nhập số.
    Yêu Cầu
        - Sử Dụng Vòng Lặp while: Để yêu cầu người dùng nhập số và xử lý các điều kiện.
        - Sử Dụng Vòng Lặp for: Để duyệt qua các số và thực hiện tính toán tổng, trung bình cộng, tìm số lớn nhất, số nhỏ nhất, số chẵn, và số lẻ.
 */

int main(){
    float sum = 0;
    float average;
    int nhap_so;
    int maxNum = std::numeric_limits<int>::min();
    int minNum = std::numeric_limits<int>::max();
    int remainder, so_chan, so_le;
    int i =1;
    int k =0;
    /* for (int i = 1; i++;)          // Sử dụng vòng lặp FOR không hiệu quả do đây là số vòng lặp không biết trước
    {
        int nhapso;
        std::cout << "Nhap cac so: ";
        std::cin >> nhapso;
        sum= sum+ nhapso;
        remainder = nhapso % 2;
        if (nhapso == 0)
        {
            std::cout<<"Tong = "<<sum<<std::endl;
            avenger = sum / (i - 2);
            std::cout<<"Trung binh cong = "<<avenger<<std::endl;
            std::cout<<"so lon nhat = "<<maxNum<<std::endl;
            std::cout<<"so be nhat = "<<minNum<<std::endl;
            return false;
        }
        if (remainder == 0)
        {
            std::cout << "so chan: " << nhapso << std::endl;
        }
        if (remainder != 0)
        {
            std::cout << "so le: " << nhapso << std::endl;
        }
    } */

   // Sử dụng While
    while (true){
        std::cout<<"nhap so: ";
        std::cin>>nhap_so;
        sum = sum+ nhap_so;
        average= sum/(i-1);
        remainder= nhap_so % 2;
        if (remainder == 0){
            k++;
        }
        so_le = i  - k;
        if ( nhap_so == 0 ){
           std::cout<<"Tong cac so= "<<sum<<std::endl; 
           std::cout<<"Trung binh cong= "<<average<<std::endl; 
           std::cout<<"so so chan = "<<(k-1)<<std::endl;
           std::cout<<"so so le = "<<so_le<<std::endl;
           break; // nhảy ra hỏi vòng lặp -- thực thi câu lệnh tiếp theo sau vòng lặp
                  // nếu dùng break thì câu lệnh sau vòng lặp này sẽ dừng thực thi           
        }
        if (minNum > nhap_so)
        {
            minNum = nhap_so;
        }
        if (maxNum < nhap_so)
        {
            maxNum = nhap_so;
        }
        i++;
    }
    if (nhap_so != 0)
    {
        std::cout << "so be nhat la so " << minNum << std::endl;
        std::cout << "so lon nhat la so " << maxNum << std::endl;
        std::cout << ">> Ket thuc chuong trinh << " << std::endl;
    }
    
    

    int nhap_so_N;
    int tong= 0;
    std::cout << "nhap so N: ";
    std::cin >> nhap_so_N;
    for (int t = 0; t <= nhap_so_N; t++)
    {   
        tong= tong+ t;
    } std::cout<<"tong 1 -> N = "<<tong<<std::endl;
    std::cout << ">> Ket thuc chuong trinh << " << std::endl;
    std::cout << "******** " << std::endl;

/* Bài Tập Tổng Hợp: Quản Lý Điểm Số
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
    int value_student;
    std::cout << "Nhap so hoc sinh: ";
    std::cin >> value_student;
    std::string student, name_max, name_min;
    float point[value_student];
    float min_point= 99;
    float sum_point, max_point= 0;

    //Sử dụng hàm For để chèn giá trị vào vòng lặp lập bảng điểm theo số lượng học sinh (tương ứng với giá trị đầu vào bao nhiêu học sinh )
    for (int i= 0; i< value_student; i++)
    {
        //Nhập dữ liệu tên va điểm học sinh
        std::cout << "Nhap ten hoc sinh: ";
        std::cin >> student;
        std::cout << "Nhap so diem: ";
        std::cin >> point[i];
        std::cout << "Ho va ten: " << student << std::endl;
        std::cout << "diem so: " << point[i] << std::endl;
        
        //Tính tổng point
        sum_point= sum_point+ point[i];

        //Tìm giá trị point lớn nhất và bé nhất
        if (max_point< point[i])
        {
            max_point= point[i];
            name_max= student;
        }
        if (min_point> point[i])
        {
            min_point= point[i];
            name_min= student;
        }
    }    
        //Tạo biến tạm
        int temp;

        //Sắp xếp điểm số nhập vào theo thứ tự:
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
            std::cout <<" "<< point[i];
    }std::cout<<std::endl;

    float average_student= sum_point/ value_student;
    std::cout<<"Tong diem cua "<<value_student<<" hoc sinh"<<" : "<<sum_point <<std::endl;
    std::cout << "Diem trung binh cua " << value_student <<" hoc sinh" << " : " << average_student << std::endl;
    std::cout << "Ban " << name_max <<" dat so diem cao nhat la " << max_point << std::endl;
    std::cout << "Ban " << name_min <<" dat so diem thap nhat la " << min_point << std::endl;

/* Bài Tập Tổng Quát: Quản Lý Danh Sách Số Nguyên
    Mô Tả Bài Tập:
    Bạn cần viết một chương trình C++ để quản lý danh sách số nguyên. Chương trình này sẽ bao gồm các yêu cầu sau:
    1.	Khởi Tạo Mảng:
    o	Khai báo một mảng chứa số lượng số nguyên (ví dụ: 10 số) và khởi tạo với giá trị 0.
    2.	Nhập Dữ Liệu:
    o	Yêu cầu người dùng nhập số lượng phần tử thực tế và giá trị cho các phần tử của mảng (không vượt quá kích thước mảng).
    3.	Cập Nhật Dữ Liệu:
    o	Sử dụng vòng lặp kiểu phạm vi để nhân mỗi giá trị của mảng với 2.
    4.	Tính Tổng:
    o	Tính tổng của tất cả các phần tử trong mảng và in kết quả ra màn hình. */
    std::cout<<"Bai tap ve tham chieu- pham vi bien- namespace- vong lap kieu pham vi"<<std::endl;
    int m;
    int arr7[m] = {};
    std::cout<<"Moi nhap so luong phan tu m: ";
    std::cin>>m;
    for (int i= 0; i< m; i++)
    {   
        std::cin>>arr7[i];
    }
    for (int var : arr7)
    {
        std::cout << " " << var;
    }
    std::cout<<std::endl;
    for (int var:arr7)
    {
        var= var*2;
        std::cout << " " << var;
    }
    
}
