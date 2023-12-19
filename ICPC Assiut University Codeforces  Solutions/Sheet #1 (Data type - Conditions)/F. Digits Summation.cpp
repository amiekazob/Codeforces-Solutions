#include<bits/stdc++.h>
using namespace std;

int main() {
  long long N, M;
  cin >> N >> M;
  int lasDig1 = N % 10; // Extract the last digit of N
  int lasDig2 = M % 10; // Extract the last digit of M
  cout << lasDig1 + lasDig2 << "\n";
  return 0;
}
