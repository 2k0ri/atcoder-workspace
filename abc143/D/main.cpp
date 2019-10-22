#include <bits/stdc++.h>
using namespace std;

void solve(long long N, std::vector<long long> L) {
  sort(L.begin(), L.end(), greater<int>());
  long long t = 0;
  for (long long a = 0; a < N - 2; a++) {
    for (long long b = a + 1; b < N - 1; b++) {
      for (long long c = b + 1; c < N; c++) {
        if ((L[a] < L[b] + L[c]) && (L[b] < L[c] + L[a]) &&
            (L[c] < L[a] + L[b])) {
          t += 1;
        }
      }
    }
  }
  cout << t << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips:
// You use the default template now. You can remove this line by using your
// custom template)
int main() {
  long long N;
  scanf("%lld", &N);
  std::vector<long long> L(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld", &L[i]);
  }
  solve(N, std::move(L));
  return 0;
}