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
	map<string, int>m;
	int cnt = 1;
	for (int i = 0; i < 26; i++) {
		string str(1, 'a' + i);
		m[str] = cnt;
		cnt++;
	}
	for (int i = 0; i < 25; i++) {
		for (int j = i + 1; j < 26; j++) {
			string str = "";
			string str1(1, 'a' + i);
			str += str1;
			string str2(1, 'a' + j);
			str += str2;
			m[str] = cnt;
			//cout << str << " " << cnt << endl;
			cnt++;
		}
	}
	for (int i = 0; i < 24; i++) {
		for (int j = i + 1; j < 25; j++) {
			for (int k = j + 1; k < 26; k++) {
				string str = "";
				string str1(1, 'a' + i);
				str += str1;
				string str2(1, 'a' + j);
				str += str2;
				string str3(1, 'a' + k);
				str += str3;
				m[str] = cnt;
				//cout << str << " " << cnt << endl;
				cnt++;
			}
		}
	}
	for (int i = 0; i < 23; i++) {
		for (int j = i + 1; j < 24; j++) {
			for (int k = j + 1; k < 25; k++) {
				for (int l = k + 1; l < 26; l++) {
					string str = "";
					string str1(1, 'a' + i);
					str += str1;
					string str2(1, 'a' + j);
					str += str2;
					string str3(1, 'a' + k);
					str += str3;
					string str4(1, 'a' + l);
					str += str4;
					m[str] = cnt;
					//cout << str << " " << cnt << endl;
					cnt++;
				}
			}
		}
	}
	for (int i = 0; i < 22; i++) {
		for (int j = i + 1; j < 23; j++) {
			for (int k = j + 1; k < 24; k++) {
				for (int l = k + 1; l < 25; l++) {
					for (int p = l + 1; p < 26; p++) {
						string str = "";
						string str1(1, 'a' + i);
						str += str1;
						string str2(1, 'a' + j);
						str += str2;
						string str3(1, 'a' + k);
						str += str3;
						string str4(1, 'a' + l);
						str += str4;
						string str5(1, 'a' + p);
						str += str5;
						m[str] = cnt;
						//cout << str << " " << cnt << endl;
						cnt++;
					}
				}
			}
		}
	}
	fr1(t, T) {
		string str;
		while (cin >> str) {
			cout << m[str] << endl;
		}
	}
}