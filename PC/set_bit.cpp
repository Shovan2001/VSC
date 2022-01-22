// at a definite postion make the bit to 1(set means make it to 1 || unset means make it to 0)
#include <iostream>
using namespace std;
int main()
{
    int n,pos,s,ans;
    cin>>n>>pos;
    s=1<<pos;
    ans=s|n;
    cout<<ans;
}