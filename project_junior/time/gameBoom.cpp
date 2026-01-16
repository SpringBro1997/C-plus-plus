/* GAME BOOM- đếm ngược thời gian 
   - Nhập 1 ký tự để gỡ bom
   - trong 5s không nhập bom nổ
*/
#include<iostream>
#include<ctime>
#include<thread>
#include<chrono>
#include<random>

int main()
{
//Tạo biến
    int choice;
    int sum= 0;
    int demNguoc= 10;
    int randomA,randomB;

//Tạo biến random
    std::random_device rd;
    std::mt19937 random(rd());
    std::uniform_int_distribution <int> dist(1,50);
    randomA= dist(random);
    randomB= dist(random);

//Tạo đếm ngược 5s
    for (int i= demNguoc; i>= 0; i--)
    {
        std::this_thread::sleep_for(std::chrono::seconds (i));
        std::cout<<"Coodown is: "<<i<<std::endl;
    }
    
//Game nhập số
    while (true)
    {
        /* code */
    }
        
     
    return 0;
}