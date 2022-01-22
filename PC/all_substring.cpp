#include <iostream>
using namespace std;
void substringalt(string s,int i,string curr)
{
    if(s.length()==i)
    {
        cout<<curr<<endl;  
        return;  
    }

    substringalt(s,i+1,curr+s[i]);
    substringalt(s,i+1,curr);
    
}
void substring(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string rem=s.substr(1);
    
    substring(rem,ans);
    substring(rem,ans+ch);
    
}
int main()
{
    // substring("ABC","");
    substringalt("ABC",0,"");
    cout<<endl;
}