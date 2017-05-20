#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> li;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
class connected
{
    ll n,m,u,v;ll count=0;
    li *united;
    vll visited;

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
            united[v].pb(u);
        }
       for(ll i=1;i<=n;i++)
       {
           if(visited[i]==0)
           {
        compute(i);
        count+=1;
           }
       }
       cout<<count<<endl;
    }
    void compute(ll k)
    {
       
            visited[k]=1;
            for(auto it=united[k].begin();it!=united[k].end();it++)
            {
                if(visited[*it]==0)
                {
                    
                    compute(*it);
                    
                }

            }
    }
        
    
};
int main()
{
    connected g;
    g.getinput();
    return 0;
}