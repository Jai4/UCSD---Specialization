#include <bits/stdc++.h>
using namespace std;
typedef double ll;
typedef pair<ll,ll> pll;
typedef vector<pair<ll,pair<ll,ll>>> vpll;
typedef pair<ll,pair<ll,ll>> pr;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class fractional
{
    ll n,W,v,w,k;ll value=0;bool b=true;
    vpll united;
    pr r;
    pll pl;
  public:
  void getinput()
  {
    cin>>n>>W;
        forn(i,0,n)
        {
        cin>>v>>w;
        united.pb(mp(v/w,mp(v,w)));
        r=united[i];
        pl=r.second;
        }
      sort(united.begin(),united.end());
      compute();
  }
    void compute()
    {
        k=n-1;
      while(b==true)
      {
         r= united[k];
         k=k-1;
         pl=r.second;
         if(pl.second>W)
         {
             value=value+(pl.first*W/pl.second);
             b=false;
         }
         else if(pl.second<=W)
         {
             W=W-pl.second;
             if(k==-1){value=value+pl.first;break;} 
             if(W==0){b=false;}  
             value=value+pl.first;
         }
      }
       printf("%.5f",value);
        
    }

  
};
int main()
{
       fractional g;
       g.getinput();
        return 0;
}