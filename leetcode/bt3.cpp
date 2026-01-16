/*
  20. Valid Parentheses
Easy
Topics
premium lock icon
Companies
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false

Example 4:
Input: s = "([])"
Output: true

Example 5:
Input: s = "([)]"
Output: false
*/

/* -Nhập 1 chuỗi string (){}[]
   - Kiểm tra xem chuỗi nhập đã thoả mãn yêu cầu chưa: 
        . ()-> true
        . ([->  flase
        .()[]-> true
        . ()[[-> flase
*/

/* 
  - Sử dụng vector để tách chuỗi srting nhập thành mảng
  - Xét các ký tự lẻ bằng vòng lặp for xem có thoả mãn điều kiện có chứa ký tự ( , { , [
  - Xét các ký tự chẵn bằng vòng lặp if- for lồng xem có thoả mãn điều kiện có chứa ký tự:
      + Nếu [ thì phải chứa ] 
      + Nếu ( thì phải chứa ) 
      + Nếu { thì phải chứa } 
*/

#include <iostream>
using namespace std;

bool check(string str, bool check)
{
  for (int i = 0; i < str.length(); i++)
  {
    if (str[0]!= '{' || str[0]!= '[' || str[0]!= '(')
    {
      check = false;
      std::cout << "False\n";
    }
    else 
    {
      for (int j= i+1; j< str.length(); j++)
      {
        /* code */
      }
      
    }

  }
}

int main ()
{
  string str;
  cout << "Nhap ky tu: ";
  cin >> str;
}