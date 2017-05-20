#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> li;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef stack<ll> sll;
typedef queue<pll> qpll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define mp make_pair
#define pb push_back
class flight
{
    bool ty=false;
    ll n,m,u,v,ans,s,t;
    pll pr;
    qpll pj;
    vll visited;
    li *united;
    public:
   void getinput()
   {
       cin>>n>>m;
       united=new li[n+1];
       forn(i,0,n+1)
       {
           visited.pb(0);
       }
       forn(i,0,m)
       {
           cin>>u>>v;
           united[u].pb(v);
           united[v].pb(u);
       }
       cin>>s>>t;
       pj.push(mp(s,0));
       while(pj.empty()==false)
       {
           if(ty==false)
           {
           pr=pj.front();  pj.pop();  
           compute();
           }
           else
           {
               break;
           }
 
       }
       if(ty==false)
       {
       cout<<-1<<endl;
       }
       else
       {
           cout<<ans<<endl;
       }
   }
    void compute()
    {
       
        for(auto it=united[pr.first].begin();it!=united[pr.first].end();it++)
        {
            if(visited[*it]==0)
            {
            visited[*it]=1;
            pj.push(mp(*it,pr.second+1));
            }
            if((*it)==t)
            {
                ans=pr.second+1;
                ty=true;
            }
        }
    }
        
};
int main()
{
    flight g;
    g.getinput();
    return 0;
}