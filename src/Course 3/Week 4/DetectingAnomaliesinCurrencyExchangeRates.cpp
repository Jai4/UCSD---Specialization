#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<pair<pll, ll>> vpll;
typedef priority_queue<pll, vector<pll>, greater<pll>> qpll;
typedef vector<ll> vll;
typedef list<pll> lpll;
typedef pair<pair<ll, ll>, ll> p;
typedef lpll::iterator uit;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define mp make_pair
#define pb push_back
class anom
{
	ll n, m, u, v, weight;
	vpll po;
	p pr;
	vll d;
	pll pt;
public:
	void getinput()
	{
		cin >> n >> m;

		forn(i, 0, m)
		{
			cin >> u >> v >> weight;
			forn(i, 0, n + 1)
			{
				d.pb(1000000000);
			}
			po.pb(mp(mp(u, v), weight));
			if (i == 0)
			{
				d[i] = 0;
			}
		}
		

		for (int i = 1; i <= n - 1; i++)
		{
			for (ll k = 0; k<m; k++)
			{
				pr = po[k];
				pt = pr.first;
				if (d[pt.second]>d[pt.first] + pr.second)
				{
					d[pt.second] = d[pt.first] + pr.second;
				}
			}
		}
		for (ll i = 0; i<1; i++)
		{
			for (ll k = 0; k<m; k++)
			{
				pr = po[k];
				pt = pr.first;
				if (d[pt.second]>d[pt.first] + pr.second)
				{
					cout << 1 << endl;
					return;

				}
			}
		}
		cout << 0 << endl;
	}

};
int main()
{
	anom g;
	g.getinput();
	return 0;
}
