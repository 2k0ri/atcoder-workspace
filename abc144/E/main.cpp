#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// clang-format off
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define rep1(i,n) for(ll i=1, i##_len=(n); i<=i##_len; ++i)
#define rrep(i,n) for(ll i=n-1; i>=0; --i)
#define rrep1(i,n) for(ll i=n; i>0; --i)
#define all(x) (x).begin(),(x).end()
#define SORT(x) sort(all(x))
#define SORT_DESC(x) sort(all(x), greater<>())
#define pb push_back
#define mp make_pair
#define coutl cout<<fixed<<setprecision(10)
#define ANS(ans) cout<<ans<<endl;
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
const int INF = 1e9;
const ll LINF = 1e18;
// clang-format on

void solve(long long N, long long K, std::vector<long long> A, std::vector<long long> F) {
  SORT(A);
  SORT_DESC(F);
  ll l = -1, r = LINF;
  while (l + 1 < r) {
    ll c = (l + r) / 2;
    bool ok = [&] {
      ll s = 0;
      rep(i, N) {
        s += max(0ll, A[i] - c / F[i]);
      }
      return s <= K;
    }();

    if (ok)
      r = c;
    else
      l = c;
  }
  ANS(r);
}

int main() {
  long long N;
  scanf("%lld", &N);
  long long K;
  scanf("%lld", &K);
  std::vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &A[i]);
  }
  std::vector<long long> F(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &F[i]);
  }
  solve(N, K, std::move(A), std::move(F));
  return 0;
}
