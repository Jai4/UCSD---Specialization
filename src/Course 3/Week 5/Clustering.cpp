#include <bits/stdc++.h>
using namespace std;
typedef double d;
typedef long long ll;
typedef pair<ll,ll> pll;
typedef pair<d,pll> pk;
typedef vector<pll> vll;
typedef vector<pair<d,pll>> vppd;
typedef vector<ll> vd;
typedef vector<d> vf;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define mp make_pair
#define pb push_back
class kr
{
   
    ll n,x,y,j1,j2;
    d t;
    pll p1,p2;
    vll united;
    vppd distance;
    pk p;pll pr;
    vd parent,rank;
    ll no;
    vf f;
    double ans=0;
  public:
   void getinput()
   {
    cin>>n;
    forn(i,0,n)
    {
        cin>>x>>y;
        united.pb(mp(x,y));
    }
    cin>>no;
    forn(i,0,n-1)
    {
        p1=united[i];
        forn(k,i+1,n)
        {
            
            p2=united[k];
            t=sqrt(((p2.first-p1.first)*(p2.first-p1.first))+((p2.second-p1.second)*(p2.second-p1.second)));
            distance.pb(mp(t,mp(i,k)));
        }
        
    }
       sort(distance.begin(),distance.end());
       forn(i,0,n)
       {
           parent.pb(i);
           rank.pb(0);
       }
       for(int i=0;i<distance.size();i++)
       {
           pr=distance[i].second;
           j1=fp(pr.first);
           j2=fp(pr.second);
           if(j1!=j2)
           {
               f.pb(distance[i].first);
               if(rank[j1]==rank[j2])
               {
                   parent[j2]=j1;
                   rank[j1]+=1;
                   rank[j2]=0;
               }
               else if(rank[j1]<rank[j2])
               {
                   parent[j1]=j2;
                   rank[j1]=0;
               }
               else
               {
                   parent[j2]=j1;
                   rank[j2]=0;   
               }
              
           }
           else
           {
               continue;
           }
       }
       int op=f.size()-(no-1);
       printf("%.10f",f[op]);
   }
    ll fp(ll k)
    {
       while(k!=parent[k])
       {
           parent[k]=fp(parent[k]);
           break;
        }
        return parent[k];
    }
};
int main()
{
    kr g;
    g.getinput();
    return 0;
}