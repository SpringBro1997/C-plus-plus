#include <iostream>

// Con trỏ là một hàm
int* ptr() 
{
    /*
    địa chỉ của biến cục bộ bị hủy, không có giá trị 
    int a= 100;
    return &a;  
    */
    
    //Trả về giá trị tĩnh- làm cho biến đó k đổi
    static int b= 90;
    return &b;
}

int main () 
{
    int* a= ptr();
    std::cout << "Value of ptr: "<<*a << std::endl;
    std::cout<<"address of ptr: "<<a<<std::endl;
    return 0;
}
09:49
Bạn đã gửi
/* 
   Bài 1
Given an array of integers nums and an integer target, 
   return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, 
   and you may not use the same element twice.
You can return the answer in any order.
EX:
   Input: nums = [2,7,11,15], target = 9
   Output: [0,1]
   Explanation: Because nums[0] + nums[1] == 9, 
   we return [0, 1].
*/

#include <iostream>
using namespace std;
int main () 
{
    int a= 9;
    int c, d;
    int arr[5]={};
    for (int i= 0; i< 5; i++) 
    {
        cin>>arr[i];
    };
    
    for (int i= 0; i< 5; i++) 
    {
        cout << arr[i] <<' ';
    };
    cout<<endl;

    for (int i= 0; i< 5; i++)
    {
        bool check= true;
        for (int j= 0; j< i; j++)
        {
            int b= 0;
            arr[i]+ arr[j]= b;
            if (b== a)
            {
                c= i;
                d= j;
                check= false;
            }

        };

        if (check!= false)
        {
            cout<<c<<' '<<d<<endl;
        }
        else
        {
            cout<<"Dont have"<<endl;
        }
    };
    
    return 0;
}