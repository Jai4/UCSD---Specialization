#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class bs
{
    ll n,k,tem,med,high,low,target;
    vll a,b;
    vll ans;
    bool bk=false;
public:
    void getinput()
    {
        cin>>n;
        forn(i,0,n)
        {
            cin>>tem;
            a.pb(tem);
        }
        cin>>k;
        forn(i,0,k)
        {
            cin>>tem;
            b.pb(tem);
        }
        
        forn(i,0,k)
        {
         
        low=0;high=a.size()-1;
        target=b[i];
        compute();
        
        }
        forn(i,0,ans.size())
        {
            cout<<ans[i]<<" ";
        }
    }
    void compute()
    {
        
        bk=false;
        while(low<=high)
        {
             med=((high-low)/2)+low;
            
             if(a[med]<target)
             {
                 low=med+1;
             }
             else if(a[med]>target)
             {
                 high=med-1;
             }
             else if(a[med]==target)
             {
                 
                 ans.pb(med);
                 bk=true;
                 return;
             }
        }
        if(bk==false)
        {
            ans.pb(-1);
        }
        
        
    }
};
int main()
{
    bs g;
    g.getinput();
    return 0;
}