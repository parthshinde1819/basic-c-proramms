/*
Write a C++ Program to Find the sum of all the natural numbers from 1 to n
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum ;
    return 0;
}