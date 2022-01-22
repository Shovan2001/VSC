#include <iostream>
using namespace std;

string remdup(string s)
{
    if(s.length()==0)
    return "";
    char ch=s[0];
    string ans=remdup(s.substr(1));
    if(ch==ans[0])
    return ans;
    return ch+ans;
}

int main()
{
    cout<<remdup("aaaaabbbbbbbccdd");

}