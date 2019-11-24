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
#define coutl cout<<fixed<<setprecision(20)
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}
// clang-format on

void solve(long long N, std::vector<long long> A) {
  ll sum = accumulate(all(A), 0);
  ll left = 0;
  ll right = sum;
  ll ans = 1e7;
  rep(i, N) {
    left += A[i];
    right -= A[i];
    if (abs(right - left) < ans) {
      ans = abs(right - left);
    }
  }
  coutl << ans << endl;
}

int main() {
  long long N;
  scanf("%lld", &N);
  std::vector<long long> A(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &A[i]);
  }
  solve(N, std::move(A));
  return 0;
}
