/*
C++ Program: The program is used to find if the given character is a vowel or a consonant
*/

#include <iostream>
using namespace std;

int main()
{
    char x;
    cin>>x;
    str vovel[] = {"a", "e", "i", "o", "u"};
    if(x==[0]||x==[1]||x==[2]||x==[3]||x==[4])
    {
        cout<<x<<" is a vowel";
    }
    else
    {
        cout<<x<<" is a consonant";
    }
    return 0;
}