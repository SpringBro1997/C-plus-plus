/* Tham chiếu từ 1 Function */
#include <iostream>
using namespace std;

// Không thể khai báo tham chiếu với 2 biến a,b là biến cục bộ của hàm
// Chúng chỉ tồn tại trong phạm vi hàm
// Khi hàm kết thúc a, b sẽ bị huỷ
/* int &animal_flase(int a,int b)
{
    return a+b; //a+b là biểu thức tính toán của 2 tham số cục bộ a,b của hàm-> a,b bị huỷ khi hàm chạy xong-> a+b cũng bị huỷ
}
 */
int &animal_true(int arr[], int size)
{
    return arr[size];
}

int main()
{
    //cout<<"Tham chieu co gia tri: "<<animal_flase(1,2)<<'\n';

    int arr[]={1,2,3,4,5};
    cout<<"Gia tri arr: ";
    for (int i= 0; i< 5; i++)
    {
        cout<<' '<<animal_true(arr,i);
    }

    return 0;
}