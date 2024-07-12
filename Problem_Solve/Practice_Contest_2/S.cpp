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
	// cin >> T;
	fr1(t, T) {
		ll m, n, point;
		cin >> m >> n;
		map<string, ll>mp;
		string str;
		while (m--) {
			cin >> str >> point;
			mp[str] = point;
			//cout << "string: " << str << " " << point << endl;
		}
		cin.ignore();
		while (n--) {
			ll total = 0;
			while (getline(cin, str)) {
				//cout << "string: " << str << endl;
				if (str == ".")break;
				string word = "";
				for (int i = 0; i < str.size(); i++) {
					if (str[i] == ' ') {
						total += mp[word];
						word = "";
					}
					else {
						word += str[i];
					}
				}
				total += mp[word];
			}
			cout << total << endl;
		}
	}
}