// clang-format off
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define rep1(i,n) for(ll i=1, i##_len=(n); i<=i##_len; ++i)
#define rrep(i,n) for(ll i=n-1; i>=0; --i)
#define rrep1(i,n) for(ll i=n; i>0; --i)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const int INF = 1e9;
const ll LINF = 1e18;
#define ANS(ans) cout<<ans<<endl;
// clang-format on

void solve(long long A, long long P) { ANS((A * 3 + P) / 2); }

int main() {
  long long A;
  scanf("%lld", &A);
  long long P;
  scanf("%lld", &P);
  solve(A, P);
  return 0;
}
