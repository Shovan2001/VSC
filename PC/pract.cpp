#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int start=0,end=s.length()-1;
    while(start<end)
    {
        if(s[start++]!=s[end--])
        {
            cout<<"Not Palindrome";
            break;
        }
        cout<<"Palindrome";
    }
}