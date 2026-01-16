#include<iostream>
#include<random>   //Thư viện cho random số trong C++
#include <chrono>  //Thư viện quản lý thời gian

int main()
{
// Tạo engine
    //std::mt19937 rng(std::chrono::steady_clock::now().time_since_epoch().count());

// Phân phối số nguyên
    //std::uniform_int_distribution<int> dist(1, 100);  // 1-100
    //int randomNum = dist(rng);

// Phân phối số thực
    //std::uniform_real_distribution<double> realDist(0.0, 1.0);
    //double randomReal = realDist(rng);

//Tạo random số cho 1 biến 
    std::random_device rd;
    std::mt19937 random(rd());
    std::uniform_int_distribution<int> dist(1,100);
    int randomNum = dist(random);

//Tạo random cho 1 array
    std::vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    std::random_device rdarr;
    std::mt19937 randomarr(rdarr());
    std::uniform_int_distribution<int> dist(1, 10);
    for (int i= 0; i< sizeof(arr)/sizeof(arr[0]); i++)
    {
        arr[i] = dist(randomarr);
    }
    
    return 0;
}
