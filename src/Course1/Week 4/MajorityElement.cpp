#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define mp make_pair
#define pb push_back
class majele
{
    ll n,tem,pr;
    ll count=1;ll mindex;
    ll times=0;
    vll united;
public:
    void getinput()
    {
        cin>>n;
        forn(i,0,n)
        {
            cin>>tem;
            united.pb(tem);
        }
        mindex=0;
        forn(i,1,united.size())
        {
            if(united[i]==united[mindex])
            {
                count+=1;
            }
            else
            {
                count-=1;
            }
            if(count==0)
            {
                count=1;
                mindex=i;
            }
        }
       
        pr=united[mindex];
        forn(i,0,united.size())
        {
            if(united[i]==pr)
            {
                times+=1;
            }
        }
        if(times>n/2)
        {
           cout<<1<<endl;   
        }
        else
        {
            cout<<0<<endl;
        }
        
    }
};
int main()
{
    majele g;
    g.getinput();
    return 0;
}