#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> li;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class possible
{
    ll n,m,u,v,s,t;
    li *united;
    vll visited;
    bool ty=false;
  public:
    void getinput()
    {
        cin>>n>>m;
        united=new li[n+1];
        forn(i,0,n+1){visited.pb(0);}
        forn(i,0,m)
        {
            cin>>u>>v;
            united[u].pb(v);
        }
        cin>>s>>t;
        compute(s);
        if(ty==false)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    void compute(ll k)
    {
       
            visited[k]=1;
            for(auto it=united[k].begin();it!=united[k].end();it++)
            {
                if(visited[*it]==0)
                {
                    if((*it)==t)
                    {
                        ty=true;
                    }
                    if(ty==false)
                    {
                    compute(*it);
                    }
                }

            }
        }
        
    
};
int main()
{
    possible g;
    g.getinput();
    return 0;
}