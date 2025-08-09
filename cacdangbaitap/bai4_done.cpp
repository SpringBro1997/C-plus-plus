#include <iostream>
int main () 
{
    int value;
    int price;
    std::cout<<"nhap so loai ca: ";
    std::cin>>value;
    int sum= 0;
    int max=0;
    int min;
    for (int i= 1; i<= value; i++)
    {
        std::cout<<"nhap gia: ";
        std::cin>>price;
        std::cout<<"ca loai "<<i<<" co gia la: "<<price<<std::endl;
        if (max< price )
        {
            max= price;
            std::cout << "loai ca so " << i << " co gia lon nhat la: " << max << std::endl;
        }
        if (min > price)
        {
            min = price;
            std::cout << "loai ca so " << i << " co gia be nhat la: " << min << std::endl;
        }
        sum= sum+ price;
        
    }
    std::cout<<"tong gia cac loai: "<<sum<<std::endl;
    

}