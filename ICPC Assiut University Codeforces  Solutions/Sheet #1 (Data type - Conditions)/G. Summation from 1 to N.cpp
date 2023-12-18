// code starts from here
#include<bits/stdc++.h>
using namespace std;

int main() {	
  long long n;
  cin >> n;
  long long res =  ((n*n) + n) / 2;
  cout<< res << "\n";   	    
  return 0;	
}
// code ends from here

/* soluation hint

long long res = 0;
for (int i = 0; i < n ; i++) {
  res+=arr[i];
}

this soluation won't work.because a loop able to do at most 10^8 operation.here
in the worst case you will given a number of 10^9 .If the limit of the loop is
is 10^8 , how would it calculate till 10^9 ? it won't.You will get an wrong answer.
so we can use a math formula only for this given problem.

Did you understand why did we use 'long long res' to calculate the answer insted of 'int res'.
ask  your teacher, friends,  senior, or internet.

*/
