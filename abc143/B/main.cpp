#include <bits/stdc++.h>
using namespace std;

void solve(long long N, std::vector<long long> d) {
  long long sum = 0;
  for (long long i = 0; i < N - 1; i++) {
    for (long long j = i + 1; j < N; j++) {
      sum += d[i] * d[j];
    }
  }
  cout << sum << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You
// use the default template now. You can remove this line by using your custom
// template)
int main() {
  long long N;
  scanf("%lld", &N);
  std::vector<long long> d(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &d[i]);
  }
  solve(N, std::move(d));
  return 0;
}
