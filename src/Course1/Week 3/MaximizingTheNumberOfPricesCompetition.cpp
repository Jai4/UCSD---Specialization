#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class ma
{
    ll k;ll l=1;bool b=true;
    vll ans;ll count=0;
public:
    void getinput()
    {
        cin>>k;
        while(b==true)
        {
            if(k>2*l)
            {
                ans.pb(l);
                k=k-l;
                l=l+1;
                count+=1;
            }
            else
            {
                count+=1;
                ans.pb(k);
                b=false;
            }
        }
        cout<<count<<endl;
        for(ll i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }    
    }
};
int main()
{
    ma g;
    g.getinput();
    return 0;
}