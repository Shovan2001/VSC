/* check if a number is power of 2
    n&n-1 will be completely 0 if it is a power of 2
    n&n-1 will have a 1 in between if it is not o power of 2
 */
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0)
    cout<<"not a power of 2";
    else if((n&n-1)==0)
    cout<<"power of 2";
    else
    cout<<"not a power of 2";
}