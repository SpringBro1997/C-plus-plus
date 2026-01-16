#include<iostream>
#include<random>

int main()
{
    //Tạo seed
    std::random_device rd;
    //Nạp seed cho engnie
    std::mt19937 random(rd());
    //Tạo khoảng random
    std::uniform_int_distribution<int> dist(1,100);
    //Tạo biến random
    int randomNum= dist(random);
    //In giá trị
    std::cout<<randomNum<<"\n";
    return 0;
}