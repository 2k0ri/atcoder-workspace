// clang-format off
#include <bits/stdc++.h>
using namespace std;
#define ANS(ans) cout<<ans<<endl;
const string YES = "Yes";
const string NO = "No";
// clang-format on

void solve(long long N) {
  if (N / 100 == 7 || (N % 100) / 10 == 7 || (N % 10) == 7) {
    ANS(YES);
  } else {
    ANS(NO);
  }
}

// clang-format off
int main() {
  long long N;
  scanf("%lld",&N);
  solve(N);
  return 0;
}
