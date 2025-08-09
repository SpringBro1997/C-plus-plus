#include <iostream>
#include <string>

//Tạo hàm 'void' không trả về giá trị
void arr (std::string a) 
{
    int cout= 0;
    int index= 0;

    // Sử dụng vòng lặp for để đọc tất cả ký tự xuất hiện trong chuỗi
    for (int i= 0; i< a.length(); i++) //a.length là độ dài chuỗi
    {
        if (a[i]== ' ')  
        // Lấy các từ Họ trong Họ và tên, từ Họ tên ngăn cách bằng dấu " "- tìm vị trí dấu cách đầu tiên
        // tạo biến cout để đếm số dấu cách, biến index để biết vị trí dấu cách đầu tiên xuất hiện
        // Từ vị trí i được gán vào biến index in số lượng 'index' ký tự đầu tiên đến vị trí index
        {
            cout++;
            if (cout== 1)
            {
                index = i;
            }
        }
    }
    std::cout << a.substr(0, index); // Từ vị trí i được gán vào biến index in số lượng 'index' ký tự đầu tiên đến vị trí index
                                     // substr(vị trí đầu tiên (0), vị trí cần in các ký tự trước đó): in các ký tự
}

int main()
{
    std::string a;
    std::getline(std::cin,a);
    arr(a);
}
