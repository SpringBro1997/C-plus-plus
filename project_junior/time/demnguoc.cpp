#include<iostream>
#include<chrono>
#include<thread>
#include<ctime>

int main()
{
    //Đếm ngược 10s đơn giản
    int totalTime= 10;
    for (int i= totalTime; i>= 0; i--)
    {
        std::cout<<i<<std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));  //Đếm ngược 10s
    }
    
    return 0;
}