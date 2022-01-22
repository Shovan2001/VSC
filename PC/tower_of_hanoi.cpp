#include <iostream>
using namespace std;
void towerOfHanoi(int n,char src,char desti,char helper)
{
    if(n==0)
    return;
    towerOfHanoi(n-1,src,helper,desti);
    cout<<"moved from "<<src<<" to "<<desti<<"\n";
    towerOfHanoi(n-1,helper,desti,src);
    
}
int main()
{
    int n;
    cin>>n;
    towerOfHanoi(n,'A','C','B');
    
}