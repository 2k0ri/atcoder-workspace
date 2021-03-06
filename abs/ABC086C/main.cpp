#include <bits/stdc++.h>
using namespace std;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, std::vector<long long> t, std::vector<long long> x,
           std::vector<long long> y) {
  for (long long i = 0; i < N; i++) {
    if (x[i] + y[i] > t[i] || (x[i] + y[i] + t[i]) % 2) {
      cout << NO << endl;
      return;
    }
  }
  cout << YES << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You
// use the default template now. You can remove this line by using your custom
// template)
int main() {
  long long N;
  scanf("%lld", &N);
  std::vector<long long> t(N);
  std::vector<long long> x(N);
  std::vector<long long> y(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &t[i]);
    scanf("%lld", &x[i]);
    scanf("%lld", &y[i]);
  }
  solve(N, std::move(t), std::move(x), std::move(y));
  return 0;
}
