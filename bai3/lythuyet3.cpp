/* Câu lệnh điều kiện IF- ELSE */
/* Toán tử logic
     *Toán tử OR (||) 
     *Toán tử AND (&&)
     *Toán tử NOT (!) */
/* Câu lệnh Swich
    - Sử dụng cho bai toán liên quan đến vòng lặp
    - Chỉ có thể so sánh 1 biến với các giá trị khác nhau */   
/* Câu lệnh Goto
     Sử dụng để nhảy đến một "Nhãn" cụ thể trong mã nguồn */    
/* Toán tử 3 ngôi */     

# include <iostream>
int main(){
/*     int a= 11;
    int b= 100;
    int c = 99;
    if (a>b){
        std::cout << "Great" << std::endl;
    } else{
        std::cout << "Fail" << std::endl;
    }
    std::cout << "Exit" << std::endl; */

    /*     if (a < b)
        {
            std::cout << "Great"<<std::endl;
        }
            std::cout << "Fail" << std::endl; */

  /* Toán tử OR */ 
/*     if (a < b || b > c)
    {
        std::cout << "OR"<<std::endl;
    } */

  /* Toán tử AND  */
/*     if (a < b && b > c)
    {
        std::cout << "AND" << std::endl;
    }
 */
  /* Toán tử NOT */
/*     if (!(a > c)) // phủ định a=11 > c= 99 -> a < c
    {
        std::cout << "NOT"<<std::endl;
    } */

  /* Câu lệnh SWITCH */
    /*     switch (a)
        {
        case 1:
            std::cout<<"Truong hop 1"<<std::endl;
            break;
        case 2:
            std::cout << "Truong hop 2" << std::endl;
            break;
        default:
            std::cout << "Truong hop cuoi" << std::endl;
            break;
        }
        return 0;*/
    
    /*EX: Viết chương trình nhập từ 1- 7 để in ra tên các thứ trong tuần  */      
/*     int a;
    std::cout<<"Nhap so ";
    std::cin>>a;
    switch (a)
    {
    case 1:
       std::cout<<"Hom nay la thu 2"<<std::endl;
       break;
    case 2:
        std::cout << "Hom nay la thu 3" << std::endl;
        break;
    case 3:
        std::cout << "Hom nay la thu 4" << std::endl;
        break;
    case 4:
        std::cout << "Hom nay la thu 5" << std::endl;
        break;
    case 5:
        std::cout << "Hom nay la thu 6" << std::endl;
        break;
    case 6:
        std::cout << "Hom nay la thu 7" << std::endl;
        break;
    case 7:
        std::cout << "Hom nay la thu chu nhat" << std::endl;
        break;
    default:
        std::cout << "Xin moi nhap lai" << std::endl;
        break;
    } */

   /* Câu lệnh Goto */
   /* lable: //Nhãn
      std::cout<<"Lable"<<std::endl;
      goto lable;
    std::cout<<"Ket thuc chuong trinh" <<std::endl;  */
    /* Ex: Viết chuong trình nhập số nguyên sử dụng goto nhảy đến nhãn phân biệt >0 <0 =0 */
/* int a;
std::cout << "Nhap so ";
std::cin >> a;
if (a>0)
{
    goto so_duong;
}else if (a<0)
{
    goto so_am;
}else
{
    goto so_0;
}
so_duong:
   std::cout<<"Day la so duong"<<std::endl;
so_am:
    std::cout << "Day la so am" << std::endl;
so_0:
    std::cout << "Day la so 0" << std::endl; */

/* Toán tử 3 ngôi */
  int a = 9;
  std::string result=((a%2)==0)?"a la so chan": "a la so le";
  std::cout<<result<<std::endl;
} 