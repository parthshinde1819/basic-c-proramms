/*
Write a C++ program to Calculate the average of all the elements present in an array.
*/

#include<iostream>
using namespace std;
int main()
{

  int arr[] = {75,83,65,90};
  float avg ;
  int size = sizeof(arr)/sizeof(arr[0]);
  avg = (arr[0] + arr[1] + arr[2] + arr[3]) / size ;
  cout << avg;
  

   
    return 0;
}