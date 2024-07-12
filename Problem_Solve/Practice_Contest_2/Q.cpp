#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define sz size()
#define mpr make_pair
#define ff first
#define ss second
#define fr0(i,n) for(i=0;i<n;i++)
#define fr1(i,n) for(i=1;i<=n ;i++)
#define fr(i,start,stop,inc) for(i=start;i<=stop;i+=inc)
#define mem(name,value) memset(name, value, sizeof(name))
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"
#define nn cout<<"\n"
#define Case(i) cout<<"Case "<<int(i)<<": ";
#define scl(x) scanf("%lld", &x)
#define sci(x) scanf("%d", &x)
#define INF (1 << 30)
#define LL_INF (1LL << 62)
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
#define MAX 1000000000
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
int main()
{
	fastio;
	int t, T = 1;
	cin >> T;
	fr1(t, T) {
		Case(t);
		int n, m;
		cin >> n >> m;
		int freePerson[n + 1];
		vector<int>v;
		for (int i = 1; i <= n; i++) {
			v.pb(i);
		}
		mem(freePerson, 1);
		int fairyWheel[m + 1];
		mem(fairyWheel, 0);
		int allOver[n + 1][m + 1];
		mem(allOver, 0);
		ll ans = 5;
		int cnt = 0;
		while (1) {
			bool shesh = false;
			for (int i = 1; i <= m; i++) {
				cnt++;
				//cout << cnt << ":  Out-> " << fairyWheel[i] ;
				if (fairyWheel[i]) {
					freePerson[fairyWheel[i]] = 1;
					v.pb(fairyWheel[i]);
					allOver[fairyWheel[i]][i] = 1;
					shesh = true;
					//nn;
					for (int l = 1; l <= n; l++) {
						for (int k = 1; k <= m; k++) {
							//cout << allOver[l][k] << " ";
							if (!allOver[l][k]) {
								shesh = false;
								break;
							}
						}
						//nn;
						if (!shesh)break;
					}
					fairyWheel[i] = 0;
					if (shesh)break;
				}
				for (int it = 0; it < v.size(); it++) {
					if (!allOver[v[it]][i]) {
						freePerson[v[it]] = 0;
						fairyWheel[i] = v[it];
						if (!v.empty()) {
							v.erase(v.begin() + it);
						}
						break;
					}
				}
				// for (int j = 1; j <= n; j++) {
				// 	if (freePerson[j] && !allOver[j][i]) {
				// 		freePerson[j] = 0;
				// 		//allOver[j][i] = 1;
				// 		fairyWheel[i] = j;
				// 		break;
				// 	}
				// }
				//cout << "In-> " << fairyWheel[i] << endl;
				ans += 5;
			}
			if (shesh)break;
		}
		cout << ans << endl;
	}
}