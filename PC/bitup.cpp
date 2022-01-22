// at a definite postion clear the bit and set the bit to 1
#include <iostream>
using namespace std;
int main()
{
    int n,pos,s,t,ans,ans1,bit;
    cin>>n>>pos>>bit;
    s=1<<pos;
    t=~s;
    ans=n&t;
    ans1=ans|(bit<<pos);
    cout<<ans1;
}