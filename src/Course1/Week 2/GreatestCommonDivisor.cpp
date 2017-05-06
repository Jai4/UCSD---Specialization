#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
class gcd
{
    ll a,b,tem;
public:
    void getinput(){cin>>a>>b;cout<<compute()<<endl;}
    ll compute(){if(b!=0){tem=b;b=a%b;a=tem;compute();}return a;}
};
int main()
{
    gcd g;
    g.getinput();
    return 0;
}