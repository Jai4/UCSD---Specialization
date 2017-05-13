#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class sumof
{
    ll n,r;ll sum=0;
    vll united;
public:
    void getinput()
    {
        cin>>n;
        united.pb(0);united.pb(1);
        forn(i,2,n+1)
        {
            r= (united[i-1]%10 + united[i-2]%10)%10 ;
            united.pb(r);
        }
        forn(i,0,united.size())
        {
            sum= (sum%10 + united[i]%10)%10;
        }
        cout<<sum;
    }
};
int main()
{
    sumof g;
    g.getinput();
    return 0;
}