/*
Write a program in C++ to check whether a number is prime or not
*/

#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int sum = 0;
    for (int i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            sum++;
        }

    }
    if(sum == 2)
    {
        cout<<"number is Prime";
    }
     else
    {
        cout<<"number is not Prime";
    }

    return 0;
}