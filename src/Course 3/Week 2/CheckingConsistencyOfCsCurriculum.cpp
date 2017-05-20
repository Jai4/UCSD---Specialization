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
    ll n,m,u,v;
    li *united;
    vll visited,black;
    bool ty=false;
  public:
    void getinput()
    {
        cin>>n>>m;
        united=new li[n+1];
        forn(i,0,n+1){visited.pb(0);black.pb(0);}
        forn(i,0,m)
        {
            cin>>u>>v;
            united[u].pb(v);
           
        }
       for(ll i=1;i<=n;i++)
       {
        if(ty==false)
         {
           if(visited[i]==0)
           {
        compute(i);
            }
        }
           else
               {
               break;
           }
       }
        if(ty==true)
            {
            cout<<1<<endl;
        }
        else
            {
            cout<<0<<endl;
        }
        
    }
    void compute(ll k)
    {
       
            visited[k]=1;
            black[k]=1;
            for(auto it=united[k].begin();it!=united[k].end();it++)
            {
                  if(ty==false)
                  {
                       if(black[*it]==1)
                       {
                           ty=true;
                           break;
                       }
                            if(visited[*it]==0)
                            {

                                compute(*it);

                            }
                  }
                else
                {
                    break;
                }
             }
        black[k]=2;
    }
        
    
};
int main()
{
    connected g;
    g.getinput();
    return 0;
}