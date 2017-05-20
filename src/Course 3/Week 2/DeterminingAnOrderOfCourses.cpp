#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<ll> vll;
typedef list<ll> li;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define pb push_back
#define mp make_pair
class connected
{
    ll n,m,u,v;ll count=1;
    li *united;
    pll pr;
    vll visited;
    vpll postorder,vertices;
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
           vertices.pb(mp(u,v));
        }
       for(ll i=0;i<vertices.size();i++)
       {
           pr=vertices[i];
           if(visited[pr.first]==0)
          {
           compute(pr.first);
           }
       }
        
        
        
       for(ll i=1;i<=n;i++) //takes care of disconnected isolated nodes
       {
        if(visited[i]==0)
           {
            count=count+2;
            postorder.pb(mp(count,i));
            }
        
       }
        sort(postorder.begin(),postorder.end());
        for(ll i=postorder.size()-1;i>=0;i--)
         {
            pr=postorder[i];
            cout<<pr.second<<" ";
        }
        
        
        
    }
    void compute(ll k)
    {
       
            visited[k]=1;
            for(auto it=united[k].begin();it!=united[k].end();it++)
            {
                 
                            if(visited[*it]==0)
                            {
                                count=count+1;
                                compute(*it);

                            }
             }
                
             
       count=count+1;
       postorder.pb(mp(count,k));
    }
        
    
};
int main()
{
    connected g;
    g.getinput();
    return 0;
}