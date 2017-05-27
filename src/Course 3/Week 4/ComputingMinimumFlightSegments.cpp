#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef priority_queue<pll, vector<pll>, greater<pll>> qpll;
typedef vector<ll> vll;
typedef list<pll> lpll;
typedef lpll::iterator uit;
#define sz size_t
#define forn(i,a,b) for(sz i=a;i<b;i++)
#define mp make_pair
#define pb push_back
class minflight
{
	ll n, m, u, v, s, t, weight;
	pll pr;
	qpll pj;
	lpll *united; uit it;
	vll proc, d;
public:
	void getinput()
	{
		cin >> n >> m;
		forn(i, 0, n + 1)
		{
			proc.pb(0);
			d.pb(1000000000);
		}
		united = new lpll[n + 1];
		forn(i, 0, m)
		{
			cin >> u >> v >> weight;
			united[u].pb(mp(v, weight));
		}
		cin >> s >> t;
		d[s] = 0; pj.push(mp(0, s));
		while (pj.empty() == false)
		{
			pr = pj.top(); pj.pop();
			if (proc[pr.second] == 0)
			{
				compute();
				proc[pr.second] = 1;
			}
		}
		if (d[t] != 1000000000)
		{
			cout << d[t] << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}
	void compute()
	{
		for (auto it = united[pr.second].begin(); it != united[pr.second].end(); it++)
		{
			if (d[it->first]>d[pr.second] + it->second)
			{
				d[it->first] = d[pr.second] + it->second;
				pj.push(mp(d[it->first], it->first));
			}
		}
	}
};
int main()
{
	minflight g;
	g.getinput();
	return 0;
}
