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
		int n;
		cin >> n;
		int cnt = 0;
		vi num;
		num.pb(0);
		while (n) {
			num.pb(n % 2);
			cnt += n % 2;
			n /= 2;
		}
		reverse(num.begin() + 1, num.end());
		next_permutation(num.begin(), num.end());
		//for (int i = 0; i < num.size(); i++)cout << num[i]; nn;
		// int zero = -1, one = -1;
		// for (int i = num.size() - 1; i >= 0; i--) {
		// 	if (num[i] == 0 && zero == -1)zero = i;
		// 	if (num[i] == 1)one = i;
		// 	if (one != -1 && zero != -1)break;
		// }
		// swap(num[zero], num[one]);
		ll ans = 0, val = 1;
		for (int i = num.size() - 1; i >= 0; i--) {
			if (i != num.size() - 1)val *= 2;
			if (num[i])
				ans += val;
		}
		
		cout << ans << endl;
	}
}