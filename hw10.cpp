/*
Write a program in C++ to find the greatest number in two numbers with the help of if/else.
*/

#include<iostream>
using namespace std;
int main()
{
  int num1, num2;
  cin>>num1>>num2
  if (num1>num2)
  {
    cout << num1<<" "<<"is greater"<<endl ;
  }
  else
  {
    cout << num2<<" "<<"is greater"<<endl ;
  }

    return 0;
}