#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll co(string a, string b)
{
    string ab=a.append(b);string ba=b.append(a);
    return ab.compare(ba)>0?1:0 ;
}
class df
{
    ll n,tem;string p;
    vector<string> united;
  public:
 void getinput()
 {
     cin>>n;
     for(ll i=0;i<n;i++)
     {
     cin>>tem;
     united.push_back(to_string(tem));
     }
     sort(united.begin(),united.end(),co);
     for(ll i=0;i<n;i++)
     {
         cout<<united[i];
     }
 }
};
int main()
{
    df g;
    g.getinput();
    return 0;
}