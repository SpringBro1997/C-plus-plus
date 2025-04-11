/* Vòng lặp For While
     *Vòng lặp FOR
        - Được sử dụng khi số vòng lặp biết trước
        - For(khởi tạo; điều kiện; bước lặp ){Mã lệnh thực thi}
      * Vòng lặp while
        - Được sử dụng khi số vòng lặp không biết trước
        - Phải có điều kiện không thì while sẽ chạy liên tục 1 giá trị thoả mãn
      * Vòng lặp do-while:
        - Đảm bảo khối lệnh trong 'do' vẫn được thực hiện 1 lần dù sai điều kiện while
      * Break và Continue
        - Break: dùng để dừng câu lệnh lập tức bỏ qua mọi điều kiện đúng
        - Continue: bỏ qua mọi câu lệnh phía sau để bắt đầu vòng lặp mới
      *Vòng lặp lồng nhau
        - Lồng nhiều vòng lặp vào nhau để xử lý các bài toán về ma trận hoặc các cấu trúc dữ liệu nhiều chiều
      * Dùng Fix và Setprecision để lấy số chữ số thập phân cần
        - Khai báo với thư viện #include <iomanip>
        - Lưu ý nếu cần quay lại định dạng mặc định thì sử dụng cú pháp:
            std::cout<< std::defaultfloat
   */

#include <iostream>
#include <iomanip>
int main(){
  /* Vòng lăp FOR */
      for(int i=1; i<= 10; i++){
         std::cout<<i<<std::endl;
      }
      /* Viết chương trình từ 1- 20 lấy số chắn */
         for (int a = 1; a <= 20; a++) {
            if (a%2 == 0){
               std::cout << a << std::endl;
         }
   }
      /* Viết một chương trình sử dụng vòng lặp for để tính tích của các số từ 1 đến 5. */ //Có dạng c*b
         int c= 1; // Khởi tạo giá trị ban đầu của c= 1 để nhân với b
         for (int b = 1; b < 6; b++)//tạo vòng lặp từ 1-5 cho b
         {
            c *= b; // c=c*b- b chạy từ 1 đến 5
         }std::cout<<"tich= " << c << std::endl;

         /* Viết một chương trình sử dụng vòng lặp for để tín  h tổng của các số từ 1 đến 20. */ // Có dạng j=j+k / j=0, k chạy từ 1 đến 20
         int j= 0;
         for (int k = 1; k <= 20; k++)
         {
            j+=k;
         }
         std::cout << "tong= " << j << std::endl;

         /* Vòng lặp While  */
         /* In từ 1-10 */
         int d = 0;
         while (d < 10)
         {
            d += 1;
            std::cout << d << std::endl;
         }

      /* viết các số lẻ từ 1-20 */
      int e=0;
      while (e<20)
      {
         if (e%2 !=0){
            std::cout << "so le: " << e << std::endl;
         }
         e += 1;
      }

      /* Viết chương trình đếm số lần nhập số 5 từ người dùng */
      int n= 0;     
      while (true) // điều kiện n luôn đúng cho đến khi nhập số khác 5
      {
         int m;                    //khai báo m cho vào vòng lặp để sau mỗi vòng đều được khai báo lại
         std::cout << "Nhap so: ";
         std::cin >> m;
         if (m==5)
         {
            n ++;
            std::cout<<"so lan nhap 5: "<<n<<std::endl;
         } else{std::cout<<"Vong lap WHILE- Ket thuc"<<std::endl;
            break;
         }
      }
      
   /*Vòng lặp do-while  */
      /* viết các số từ 1-10  */
      int l=1;
      do
      {
         std::cout << l << std::endl;
         l+=1;
      } while (l <= 10);
      std::cout<<"Vong lap do- while"<<std::endl;

      /* Viết một chương trình sử dụng vòng lặp do-while để yêu cầu người dùng nhập vào một số từ 1 đến 100 cho đến khi số đó lớn hơn 50. */
      int z;
      do
      {
         std::cout<<"nhap so: ";
         std::cin>>z;
      } while (z<=50);
        

      /* Viết một chương trình sử dụng vòng lặp do - while để tính tổng của các số nhập vào cho đến khi người dùng nhập số 0. */
         /*      int v;
                 int x = 0;
                  do {
                        std::cout << "nhap so: ";
                        std::cin >> v;
                        if (v != 0){
                            x = v + x;
                            std::cout << "tong= " << x << std::endl;
                        }
                  }while (true); */

   /* Câu lệnh break */
      /* viết các số 1-10 dừng lại ở số 7 sử dụng câu lệnh break  */
      for (int h = 1; h <= 10; h++)
      {
         if (h == 7) { // in từ 1->6 trừ 7->10   
            break;}
         std::cout<<h<<std::endl;
         std::cout<<"ket thuc vong lap - Break"<<std::endl;
      }
   
   /*  Câu lệnh Continue */
      /* Viết các số 1-10 */
      for (int o = 1; o <= 10; o++)
      {
         std::cout << o << std::endl;
         continue;                   // chạy lại vòng lặp ngay lập tức dù còn điều kiện phía sau
         if (o == 1)
         {
            break;
         }
      }
   /* Vòng lặp lồng nhau */   
      for (int t = 0; t <= 5; t++)
      {
         for (int r= 0; r <= 5; r++)
         {
            std::cout<<"*";
         }std::cout<<std::endl;
      }
      
}