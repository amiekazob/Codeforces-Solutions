/* code starts here */
#include<bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
   
  if (a % b == 0 || b % a == 0) {
  	cout <<"Multiples"<<"\n";
  }else {
  	cout <<"No Multiples"<<"\n";
  }
  return 0;
}
/* code end here */

/* Discussion 

A will be multiple of B , if B divides A ( with 0 reminder )  or vice verse.
Take mod of two numbers if we got 0 as reminder print "Multiples" otherwise "No Multiples"

link - 1 : https://byjus.com/maths/what-is-a-multiple/
link - 2 : https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/what-is-modular-arithmetic


*/ 
