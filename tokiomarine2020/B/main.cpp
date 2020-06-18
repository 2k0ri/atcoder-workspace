// clang-format off
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using G = vector<vector<ll>>;
#define G(i, j) i, vector<ll>(j)
#define Gv(i, j, k) i, vector<ll>(j, k)
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define rep1(i,n) for(ll i=1, i##_len=(n); i<=i##_len; ++i)
#define rrep(i,n) for(ll i=n-1; i>=0; --i)
#define rrep1(i,n) for(ll i=n; i>0; --i)
#define all(x) (x).begin(),(x).end()
#define SORT(x) sort(all(x))
#define SORT_DESC(x) sort((x).rbegin(),(x).rend())
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
#define ANS(ans) cout<<ans<<endl
#define END(ans) ANS(ans); return
const ll LINF = (1LL << 62) - 1;
const int INF = (1 << 30) - 1;
template<class T>inline bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>inline bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const string YES = "YES";
const string NO = "NO";
// clang-format on

void solve(long long A, long long V, long long B, long long W, long long T) {
  if (A == B) {
    END(YES);
  }
  if (W >= V) {
    END(NO);
  }
  ll t = ceil(abs((long double)(B - A) / (W - V)));
  ANS((t <= T ? YES : NO));
}

// clang-format off
int main() {
  long long A;
  scanf("%lld",&A);
  long long V;
  scanf("%lld",&V);
  long long B;
  scanf("%lld",&B);
  long long W;
  scanf("%lld",&W);
  long long T;
  scanf("%lld",&T);
  solve(A, V, B, W, T);
  return 0;
}
