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
int main(){
    /* Phuong pháp Selection Sort
        Mô tả:
            Tìm phần tử nhỏ nhất trong mảng và hoán đổi nó với phần tử đầu tiên.
            Lặp lại quá trình cho đến khi toàn bộ mảng được sắp xếp.
     */
    int Selection_Sort[] = {5, 3, 8, 1, 4};
    int length_SelectionSort= sizeof(Selection_Sort)/sizeof(Selection_Sort[0]); 
    for (int i = 0; i < length_SelectionSort; i++)
    {
        int index= i;
        for (int j= i+1; j< length_SelectionSort; j++)
        {
            if (Selection_Sort[index]> Selection_Sort[j])
            {
                index= j;
            }
        }
        int temp= Selection_Sort[i];
        Selection_Sort[i]= Selection_Sort[index];
        Selection_Sort[index]= temp;
    }
    for (int i= 0; i< length_SelectionSort; i++)
    {
        std::cout<<"mang moi: "<<Selection_Sort[i]<<std::endl; 
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