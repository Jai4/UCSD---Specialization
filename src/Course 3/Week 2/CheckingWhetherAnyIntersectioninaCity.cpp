#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef list<ll> li;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef stack<ll> sll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define mp make_pair
#define pb push_back
class connectedc
{
    ll n,m,u,v,w;ll count=0;
    vll visited,visitedr;
    sll finish;
    pll pr;
    vpll vertices;
    li *united;li *unitedr;
    public:
    void getinput()
    {
        cin>>n>>m;
        united=new li[n+1];
        unitedr=new li[n+1];
        forn(i,0,n+1)
        {visited.pb(0);visitedr.pb(0);}
        forn(i,0,m)
        {
            cin>>u>>v;
            united[u].pb(v);
            unitedr[v].pb(u);
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
        for(ll i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                finish.push(i);
            }
        }
        while(finish.empty()==false)
        {
            w=finish.top();finish.pop();
            if(visitedr[w]==0)
            {
                computer(w);
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
        finish.push(k);
    }
    void computer(ll k)
    {
        visitedr[k]=1;
        for(auto it=unitedr[k].begin();it!=unitedr[k].end();it++)
        {
            if(visitedr[*it]==0)
            {
                computer(*it);
            }
        }
    }
};
int main()
{
    connectedc g;
    g.getinput();
    return 0;
}