#include<bits/stdc++.h>
using namespace std;
const int N = 505;
int a[N][N];
void get_swap(int n, int x, int y) {
  for (int i = 1; i <= n; i++){ // row swap
  	swap(a[x][i], a[y][i]);
  }
  for (int i = 1; i <= n; i++){ // column swap
  	swap(a[i][x], a[i][y]);
  }
}
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int n, x, y; cin >> n >> x >> y;
  for (int i = 1; i <= n; i++) {
  	for (int j = 1; j <= n; j++) cin >> a[i][j];
  }
  get_swap(n, x, y);
    for (int i = 1; i <= n; i++) {
       for (int j = 1; j <= n; j++) cout << a[i][j] << " ";
   	cout << '\n';
  }
 return 0;
}
