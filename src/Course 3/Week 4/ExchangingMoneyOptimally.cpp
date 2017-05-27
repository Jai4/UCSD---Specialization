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
typedef queue<ll> qll;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define mp make_pair
#define pb push_back
class optimalmoney
{
	ll n, m, u, v, weight, tem, s;
	vpll po;
	p pr;
	vll d, pk;
	pll pt;
	lpll *united;
	qll relax;
public:
	void getinput()
	{
		cin >> n >> m;
		united = new lpll[n + 1];
		forn(i, 0, n + 1)
		{
			d.pb(1000000000);
			pk.pb(-1);
		}
		forn(i, 0, m)
		{
			cin >> u >> v >> weight;
			po.pb(mp(mp(u, v), weight));
			united[u].pb(mp(v, weight));

		}
		cin >> s;
		d[s] = 0;
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
					relax.push(pt.second);
				}
			}
		}
		while (relax.empty() == false)
		{
			tem = relax.front(); relax.pop();
			for (auto it = united[tem].begin(); it != united[tem].end(); it++)
			{
				d[it->first] = -12;
				if (pk[it->first] == -1)
				{
					relax.push(it->first);
				}
			}
			pk[tem] = 1;
		}
		for (ll i = 1; i<d.size(); i++)
		{
			if (d[i] == -12)
			{
				cout << "-" << endl;
			}
			else if (d[i] == 1000000000)
			{
				cout << "*" << endl;
			}
			else
			{
				cout << d[i] << endl;
			}
		}

	}

};
int main()
{
	optimalmoney g;
	g.getinput();
	return 0;
}
