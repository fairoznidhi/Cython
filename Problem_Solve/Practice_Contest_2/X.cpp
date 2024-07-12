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
bool comparator(const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
	if (get<0>(a) != get<0>(b)) {
		return get<0>(a) > get<0>(b);
	}
	else if (get<1>(a) != get<1>(b)) {
		return get<1>(a) < get<1>(b);
	}
	else {
		return get<2>(a) < get<2>(b);
	}
}
int main()
{
	fastio;
	int t, T = 1;
	cin >> T;
	cin.ignore();
	cin.ignore();
	fr1(t, T) {
		if (t != 1)nn;
		int solved[101][11];
		int solveCount[101];
		mem(solveCount, 0);
		mem(solved, 0);
		int penalty[101][11];
		mem(penalty, 0);
		set<int>participant;
		string str;
		while (getline(cin, str)) {
			if (str.size() == 0)break;
			stringstream s;
			s << str;
			int arr[3];
			string l;
			s >> arr[0] >> arr[1] >> arr[2] >> l;
			participant.insert(arr[0]);
			if (l == "C" && !solved[arr[0]][arr[1]]) {
				solved[arr[0]][arr[1]] = 1;
				penalty[arr[0]][arr[1]] += arr[2];
				solveCount[arr[0]]++;
			}
			else if (l == "I" && !solved[arr[0]][arr[1]]) {
				penalty[arr[0]][arr[1]] += 20;
			}
		}
		vector<tuple<int, int, int>>v;
		for (auto p : participant) {
			ll totalPenalty = 0;
			for (int i = 1; i <= 10; i++) {
				if (solved[p][i]) {
					totalPenalty += (ll)penalty[p][i];
				}
			}
			v.pb(make_tuple(solveCount[p], totalPenalty, p));
		}
		// for(int i=0)
		sort(v.begin(), v.end(), comparator);
		for (int i = 0; i < v.size(); i++) {
			cout << get<2>(v[i]) << " " << get<0>(v[i]) << " " << get<1>(v[i]) << endl;
		}
	}
}