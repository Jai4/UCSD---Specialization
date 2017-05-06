#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<=b;i++)
#define pb push_back
class lastfibonacci
{
    ll no,temp;
    public:
    void input()
    {
        cin >> no;ll a[no+1]={0};a[0]=0;a[1]=1;
        if((no==0)||(no==1)){cout<<a[no]<<endl;return;}
        forn(i,2,no){a[i]=(a[i-1]%10+a[i-2]%10)%10;}cout<<a[no]<<endl;
    }
};
int main()
{
    lastfibonacci g;
    g.input();
    return 0;
}