#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
class pairwise
{
    ll n,tem;vll united;
public:
    void getinput(){cin>>n;forn(i,1,n){cin>>tem;united.pb(tem);}compute();}
    void compute(){sort(united.begin(),united.end(),greater<ll>());cout<<(united[0]*united[1])<<endl;}
};
int main()
{
    pairwise g;
    g.getinput();
    return 0;
}