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
int func(int a) {
	int cnt = 0;
	while (a) {
		a /= 10;
		cnt++;
	}
	return cnt - 1;
}
int main()
{
	fastio;
	int t, T = 1;
	cin >> T;
	fr1(t, T) {
		int x1, p1, x2, p2;
		cin >> x1 >> p1 >> x2 >> p2;
		int z1, z2;
		z1 = func(x1);
		z2 = func(x2);
		int gun = abs(z1 - z2);
		z1 += p1;
		z2 += p2;
		// cout << z1 << " " << z2 << endl;
		if (z1 != z2) {
			if (z1 > z2)cout << ">" << endl;
			else cout << "<" << endl;
			continue;
		}
		z1 -= p1;
		z2 -= p2;
		if (z1 > z2) {
			x2 *= pow(10, gun);
		}
		else {
			x1 *= pow(10, gun);
		}
		// cout << "a:";
		if (x1 > x2)cout << ">" << endl;
		else if (x2 > x1)cout << "<" << endl;
		else cout << "=" << endl;
	}
}