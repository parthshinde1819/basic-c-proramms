/*
Write a program to swap two numbers in C++.
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 10 ;
    int b = 20;
     int temp;
     cout<<"before swapping"<<" " <<a<<" "<<b<<endl;
    temp = a ;
    a = b ;
    b = temp ;
    cout <<"before swapping"<<" "<< a << " " << b << endl;
    return 0;
}