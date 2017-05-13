#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define pb push_back
class gc
{
    ll n,m,r;vll united;bool b=true;
    ll count=0;
public:
    void getinput()
    {
        cin>>n>>m;
        compute();
        cout<<united[n%(count-1)]<<endl;
    }
    void compute()
    {
        united.pb(0);united.pb(1);
        count=2;ll k=2;
        while(b==true)
        {
            count+=1;
            r= (united[k-1]%m + united[k-2]%m)%m;
            if(r==0)
            {
                united.pb(r);
                k+=1;
                r=(united[k-1]%m + united[k-2]%m)%m;
                if(r==1){return;}
            }
            else
            {
                united.pb(r);
                k+=1;
            }
        }
    }
};
int main()
{
    gc g;
    g.getinput();
    return 0;
}
