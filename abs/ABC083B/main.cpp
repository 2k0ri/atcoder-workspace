#include <bits/stdc++.h>
using namespace std;

void solve(long long N, long long A, long long B) {
  long long ans = 0;
  for (long long i = 0; i <= N; i++) {
    string s = to_string(i);
    long long sum = 0;
    for (long long j = 0; j < s.length(); j++) {
      sum += s[j] - '0';
    }
    if (A <= sum && sum <= B) {
      ans += i;
    }
  }
  cout << ans << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You
// use the default template now. You can remove this line by using your custom
// template)
int main() {
  long long N;
  scanf("%lld", &N);
  long long A;
  scanf("%lld", &A);
  long long B;
  scanf("%lld", &B);
  solve(N, A, B);
  return 0;
}
