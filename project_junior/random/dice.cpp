/* Trò chơi oẳn tù tì Bao-Kéo-Búa */
#include<iostream>
#include<random>
int main()
{
    //Tạo seed
    std::random_device rd;
    
    //Tạo engie - Nạp seed
    std::mt19937 random(rd());

    //Tạo khoảng random
    std::uniform_int_distribution<int> dist(1,3);

    //Tạo biến 
    int game= dist(random);

    //Game
    int choice, choice_1,win,lose;
    while (choice <2)
    {
        std::cout<<"***** Game Bao- Keo- Bua ***** \n";
        std::cout<<"1.Start Game\n";
        std::cout<<"Nhap lua chon: \n";
        std::cin>>choice;

        //Lựa chọn
        if (choice== 1)
        {
            while (choice_1< 4)
            {
                std::cout<<"Lua chon Bao Keo Bua\n";
                std::cout<<"1. Bao\n";
                std::cout<<"2. Keo\n";
                std::cout<<"3. Bua\n";
                std::cout<<"Nhap lua chon: ";
                std::cin>>choice_1;
                
                //Kết quả
                switch (game)
                {
                case 1:
                    if (choice_1== 1)
                    {
                        std::cout<<"Hoa nhau\n";
                    }
                    if (choice_1== 2)
                    {
                        std::cout<<"Ban da thua\n";
                    }
                    if (choice_1== 3)
                    {
                        std::cout<<"Ban da thang\n";
                        win++;
                    }
                    break;

                case 2:
                if (choice_1== 1)
                    {
                        std::cout<<"Ban da thang\n";
                        win++;
                    }
                    if (choice_1== 2)
                    {
                        std::cout<<"Hoa nhau\n";
                    }
                    if (choice_1== 3)
                    {
                        std::cout<<"Ban da thua\n";
                    }
                    break;

                case 3:
                if (choice_1== 1)
                    {
                        std::cout<<"Ban da thua\n";
                    }
                    if (choice_1== 2)
                    {
                        std::cout<<"Ban da thang\n";
                        win++;
                    }
                    if (choice_1== 3)
                    {
                        std::cout<<"Hoa nhau\n";
                    }
                    break;
                }
            }
            
        }
        
    }

    return 0;
}