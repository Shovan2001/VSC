//At a definite postion make the bit to 1(set means make it to 1 || unset/clear means make it to 0)
#include <iostream>
using namespace std;
int main()
{
    int n,pos,s,t,ans;
    cin>>n>>pos;
    s=1<<pos;
    t=~s;
    ans=n&t;
    cout<<ans;
}