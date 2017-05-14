#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class maximumrevenue
{
    ll tem,n;ll product=0;
    vll a,b;
public:
    void getinput()
    {
        cin>>n;
        forn(i,0,n){cin>>tem;a.pb(tem);}
        forn(i,0,n){cin>>tem;b.pb(tem);}
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
       forn(i,0,n)
       {
           product=product+(a[i]*b[i]);
       }
       cout<<product;
    }
};
int main()
{
    maximumrevenue g;
    g.getinput();
    return 0;
}
