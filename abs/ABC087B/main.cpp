#include <bits/stdc++.h>
using namespace std;

void solve(long long A, long long B, long long C, long long X) {
  int count = 0;
  for (int a = 0; a <= A; a++) {
    for (int b = 0; b <= B; b++) {
      for (int c = 0; c <= C; c++) {
        if ((a * 500) + (b * 100) + (c * 50) == X) {
          count++;
        }
      }
    }
  }
  cout << count << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You
// use the default template now. You can remove this line by using your custom
// template)
int main() {
  long long A;
  scanf("%lld", &A);
  long long B;
  scanf("%lld", &B);
  long long C;
  scanf("%lld", &C);
  long long X;
  scanf("%lld", &X);
  solve(A, B, C, X);
  return 0;
}
