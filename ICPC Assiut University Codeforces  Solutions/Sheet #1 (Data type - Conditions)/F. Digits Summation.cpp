#include<bits/stdc++.h>
using namespace std;

int main() {
  long long N, M;
  cin >> N >> M;
  int res1 = N % 10; // Extract the last digit of N
  int res2 = M % 10; // Extract the last digit of M
  cout << res1 + res2 << "\n";
  return 0;
}
