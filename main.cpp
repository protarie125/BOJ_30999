#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;

ll n, m;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> m;

  auto ans = ll{0};
  while (0 < (n--)) {
    string s;
    cin >> s;

    auto gd = ll{0};
    for (const auto& c : s) {
      if ('O' == c) {
        ++gd;
      }
    }

    if (m / 2 < gd) {
      ++ans;
    }
  }

  cout << ans;

  return 0;
}