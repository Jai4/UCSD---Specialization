#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> li;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef stack<ll> sll;
typedef queue<ll> qll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define mp make_pair
#define pb push_back
class bipart
{
    bool ty=false;
    ll n,m,u,v;ll pr;
    qll pj;
    vll visited,color;
    pll r;
    li *united;
    vpll vertices;
    public:
   void getinput()
   {
       cin>>n>>m;
       united=new li[n+1];
       forn(i,0,n+1)
       {
           visited.pb(0);color.pb(0);
       }
       forn(i,0,m)
       {
           cin>>u>>v;
           united[u].pb(v);
           united[v].pb(u);
           vertices.pb(mp(u,v));
       }
      
       for(ll i=0;i<vertices.size();i++)
       {
           if(ty==false)
           {
               r=vertices[i];
               if(visited[r.first]==0)
               {
                   pj.push(r.first);
                  
                   while(pj.empty()==false)
                   {
                       if(ty==false)
                       {
                       pr=pj.front();pj.pop();
                       
                       compute();
                       }
                       else
                       {
                           break;
                       }
                   }
               }
           }
           else
           {
               break;
           }
               
       }
       if(ty==false)
       {
           cout<<1<<endl;
       }
       else
       {
           cout<<0<<endl;
       }
   }
    void compute()
    {
        visited[pr]=1;
      
        for(auto it=united[pr].begin();it!=united[pr].end();it++)
        {
            if(visited[*it]==0)
            {
              
                visited[*it]=1;
                color[*it]=-1;
                pj.push(*it);
                
            }
            else if(visited[*it]==1)
            {
                if(color[*it]==-1)
                {
                    ty=true;
                    break;
                }
            }
           
            
        }
        color[pr]=1;
        
    }
        
};
int main()
{
    bipart g;
    g.getinput();
    return 0;
}