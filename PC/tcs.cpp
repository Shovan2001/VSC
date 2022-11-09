#include <bits/stdc++.h>
#define int long long
#define FOR(i, n) for (int i = 0; i < n; i++)
#define M 1000000007
using namespace std;
 
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void setIO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
bitset<100000001> Primelist;
vector<int> check(int n)
{
  vector<int> res;
    Primelist[0] = 1;
    for (int i = 3; i*i <= n; i += 2) {
        if (Primelist[i / 2] == 0) {
            for (int j = 3 * i; j <= n; j += 2 * i)
                Primelist[j / 2] = 1;
        }
    }
    //int maxi=2;
    res.push_back(2);
    for (int i = 1; i <= n; i+=2) {
        if (i % 2 == 1 && Primelist[i / 2] == 0){
          res.push_back(i);
        }
    }

    return res;
}
void calculate(){
  //cout<<check(1001)<<"\n";
  int inp1,inp2,fg;
  cin>>fg>>inp1>>inp2;
  int i=inp1;
  vector<int> primesfound=check(inp2+1);
  vector<int> set(inp2+1,0);
  for(int i=0;i<primesfound.size();i++){
    set[primesfound[i]]=1;
  }
  if(inp1%2!=0){
    i++;
  }
  int xfinal=-1,yfinal=-1;
  for(;i<inp2-1;i+=2){
    int x=i;
    int y=i+2;
    int frc=(x*y)/4;
    if(set[x+1]!=1){
      frc=x*(x+1);
      y=i+1;
    }
    if(frc>=fg){
      xfinal=x;
      yfinal=y;
      break;
    }
  }

  if(xfinal==-1 || yfinal==-1){
    cout<<"None\n";
  }
  else{
    if(xfinal>0){
      if(set[xfinal-1]==0 && xfinal*(xfinal-1)>=fg && xfinal-1>=inp1){
        cout<<xfinal-1<<" "<<xfinal<<"\n";
      }
      else{
        cout<<xfinal<<" "<<yfinal<<"\n";
      }
    }
    else{
      cout<<xfinal<<" "<<yfinal<<"\n";
    }
  }
}

int32_t main()
{
  fast;
  setIO();
  int t=1;       
  //cin>>t; 
  while (t--){
    calculate();
  }
  return 0;
}