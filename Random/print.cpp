#include <iostream>
using namespace std;
int print(int n)
{
    if(n<=1)
    return n;

    return print(n-1)+print(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<print(n);
}