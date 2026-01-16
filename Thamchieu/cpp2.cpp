/* Tham chiếu với đối tượng (OOP) */
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    Student(const string &newName, const int newage)
    {
        this->name= newName;
        this->age= newage;
        cout<<"Name: "<<name<<" Age: "<<age<<'\n';
    };
};

int main()
{
    Student a("Alice",12);
    return 0;
}