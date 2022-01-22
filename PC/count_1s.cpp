//count no of 1s in the binary form of the number
#include <iostream>
using namespace std;
int main()
{
    int n,c;
    c=0;
    cin>>n;
    while(n!=0)
    {
        n=n&n-1;
        c++;
    }
    cout<<c;
}