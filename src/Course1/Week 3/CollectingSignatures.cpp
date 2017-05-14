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

bool compare(const pair<ll,ll>&i,const pair<ll,ll>&j)
{
    return i.second<j.second;
}
class op
{
    ll a,b,tem,n;ll count=0;ll index=0;
    vpll united;
    vll k;vll points;
    pll pr,rp;
public:
    void getinput()
    {
        cin>>n;
        forn(i,0,n)
        {
            cin>>a>>b;
            united.pb(mp(a,b));
            k.pb(-1);points.pb(-1);
        }
        sort(united.begin(),united.end(),compare);
        forn(i,0,united.size())
        {
            if(k[i]==-1)
            {
                count+=1;
                pr=united[i];
                tem=pr.second;points[index]=pr.second;
                forn(j,i+1,united.size())
                {
                    rp=united[j];
                    if(rp.first<=tem)
                    {
                        k[j]=1;
                    }
                }
                index+=1;
            }
        }
        cout<<count<<endl;
        forn(i,0,points.size())
        {
            if(points[i]!=-1)
            {
                cout<<points[i]<<" ";
            }
            else
            {
                break;
            }
        }
    }
};
int main()
{
    op g;
    g.getinput();
    return 0;
}
    

