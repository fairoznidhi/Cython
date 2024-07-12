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
		int n, m;
		cin >> n >> m;
		queue<int> q;
		int f[m + 1] = {};
		for (int i = 1; i <= n; i++) {
			q.push(i);
		}
		int arr[n + 1][m + 1] = {};
		int ans = 0;
		while (1) {
			if (q.empty()) {
				int cnt = 0;
				for (int i = 0; i < m; i++) {
					if (f[i])cnt++;
				}
				if (!cnt)break;
				else {
					for (int i = m - 1; i >= 0; i--) {
						if (f[i]) {
							ans += (i + 1) * 5;
							break;
						}
					}
				}
			}
			for (int i = 1; i <= m; i++) {
				int top = q.front();
				if (i > 1) {
					bool shesh = true;
					if (f[i]) {
						for (int k = 1; k <= m; k++) {
							if (!arr[top][k]) {
								shesh = false;
							}
						}
						if (!shesh)
							q.push(f[i]);
						f[i] = 0;
					}
				}
				if (!arr[top][i]) {
					arr[top][i] = 1;
					q.pop();
					f[i] = top;
				}
				else {
					f[i] = 0;
				}
				ans += 5;
			}
		}
	}
}