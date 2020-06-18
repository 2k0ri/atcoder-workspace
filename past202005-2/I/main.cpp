// clang-format off
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll, ll>;
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
template<class T>bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a, const T &b){if (b<a){a=b;return 1;}return 0;}

// clang-format on

vector<vector<ll>> transpose(vector<vector<ll>> v) {
  ll p = 0;
  vector<vector<ll>> rlt;
  ll row = v.size();
  ll col = v[0].size();
  rlt.resize(col);
  for (ll i = 0; col > i; i++)
    rlt[i].resize(row);
  for (ll i = 0; row > i; i++)
    for (ll j = 0; col > j; j++) {
      ll d = v[i][j];
      ll x = p % col;
      ll y = p / col;
      rlt[x][y] = d;
      p++;
    }
  return rlt;
}

int main() {
  ll N, Q;
  cin >> N >> Q;
  vector<vector<ll>> a(N, vector<ll>(N));
  rep(i, N) rep(j, N) {
    a[i][j] = N * i + j;
  }
  vector<ll> _A(N);
  vector<vector<ll>> _a(N, vector<ll>(N));
  rep(q, Q) {
    ll mode, A, B;
    cin >> mode;
    if (mode != 3) {
      cin >> A >> B;
      A--;
      B--;
    }
    if (mode == 1) {
      rep(i, N) {
        _A[i] = a[A][i];
        // _B[i] = a[B][i];
        // a[A][i] = _B[i];
        a[A][i] = a[B][i];
        a[B][i] = _A[i];
      }
      // copy(all(a[A]), back_inserter(_A));
      // copy(all(a[B]), back_inserter(_B));
      // rep(i, N) {
      //   a[A][i] = _B[i];
      //   a[B][i] = _A[i];
      // };
    } else if (mode == 2) {
      rep(i, N) {
        _A[i] = a[i][A];
        // _B[i] = a[i][B];
        // a[i][A] = _B[i];
        a[i][A] = a[i][B];
        a[i][B] = _A[i];
      }
    } else if (mode == 3) {
      // vector<ll> _A(N), _B(N);
      // rep(i, N) rep(j, N) {
      //   _A[i] = a[i][A];
      //   _B[i] = a[i][B];

      //   a[i][A] = _B[i];
      //   a[i][B] = _A[i];
      // }
      ll p = 0;
      rep(i, N) rep(j, N) {
        ll d = a[i][j];
        ll x = p % N;
        ll y = p / N;
        _a[x][y] = d;
        p++;
      }
      a = _a;
    } else {
      ANS(a[A][B]);
    }
  }
  return 0;
}
