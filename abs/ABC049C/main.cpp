#include <bits/stdc++.h>
#include <boost/algorithm/string/replace.hpp>
using namespace std;

const string YES = "YES";
const string NO = "NO";

void solve(std::string S) {
  if (boost::algorithm::replace_all_copy(
          boost::algorithm::replace_all_copy(
              boost::algorithm::replace_all_copy(
                  boost::algorithm::replace_all_copy(S, "eraser", ""), "erase",
                  ""),
              "dreamer", ""),
          "dream", "")
          .size() == 0)
    cout << YES << endl;
  else
    cout << NO << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You
// use the default template now. You can remove this line by using your custom
// template)
int main() {
  std::string S;
  std::cin >> S;
  solve(S);
  return 0;
}