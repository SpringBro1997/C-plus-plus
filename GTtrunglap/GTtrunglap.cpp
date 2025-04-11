/*  Dạng toán logic: Finding Duplicate Elements in an Array (stastic)
                    Tìm giá trị trùng lặp trong 1 mảng (mảng tĩnh)  */
/*  Phương pháp dưới áp dụng được cho dạng bài tìm số lần lặp */                    

/* Ví dụ: Tìm Các Phần Tử Trùng Lặp Trong Mảng
 Yêu Cầu:
        1.Tìm và in ra các phần tử trùng lặp trong mảng.
   Ví Dụ:
        • Đầu Vào:
            o Mảng: {1, 2, 3, 4, 2, 3, 4, 5, 2, 3, 4, 9}
        • Đầu Ra:
            o Các phần tử trùng lặp: 2 3 4 */

#include <iostream>
int main(){
    int a[]= {1, 2, 3, 4, 2, 3, 4, 5, 2, 3, 4, 9};
    int length= sizeof(a)/sizeof(a[0]);

    // Tạo vòng lặp i
    for (int i= 0; i< length; i++)
    {   
        //Tạo biến đếm
        int count= 0;
        for (int j= i+1; j< length; j++)
        {   
            bool check= false;
            if (a[i]== a[j])
            {
                //Tạo vòng lặp k nằm kiểm tra các giá trị trùng lặp tại vị trí k< i
                for (int k= 0; k< i; k++)
                {   
                    // Nếu a[i]= a[k] -> Gán giá trị check thành true
                    // Khi đó lập tức thoát khỏi vòng lặp k
                    if (a[i]== a[k])
                    {
                        check= true;
                        break;
                    }
                }

                // Vòng lặp j tiếp tục khi a[i]# a[k] hoặc a[i]= a[k]
                
                // count= 1 khi giá trị a[j]= a[i] xuất hiện lần thứ 2 (lân đầu xuất hiện thì count= 0)
                // thoát ra khỏi vòng lặp j ngay lập tức- Nằm loại bỏ giá trị trung lặp xuất hiện lần 2 j với i
                if (count== 1)
                {
                    break;
                }
                count++;
                // Nếu a[i]!= a[k]-> check= false -> !check= true-> kết quả đúng được in ra
                // Nếu a[i]= a[k]-> check= true-> !check= false-> kết quả sai không được in ra
                if (!check)
                {
                    std::cout<<"gia tri trung lap: "<<a[i]<<std::endl;
                }
                
            }
            
        }
        
    }
    
}