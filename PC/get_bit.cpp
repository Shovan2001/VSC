//at a given postion u need to find the bit of the number(e.g-1011 at pos-2 bit is 0)
#include <iostream>
using namespace std;
int main()
{
    int n,pos,s,ans;
    cin>>n>>pos;
    s=1<<pos;
    ans=s&n;
    if(ans==0)
    cout<<0;
    else
    cout<<1;
}