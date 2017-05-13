#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class fractional
{
    ll m;ll sum=0;
  public:
  void getinput()
  {
    cin>>m;
    while(m/10!=0){m=m-10;sum+=1;}
    while(m/5!=0){m=m-5;sum+=1;}
    while(m/1!=0){m=m-1;sum+=1;}
    cout<<sum;
  }
  
};
int main()
{
       fractional g;
       g.getinput();
        return 0;
}