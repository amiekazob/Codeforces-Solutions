// code starts from here

#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int a; 
  long long b;
  char c;
  float d;
  double e;
  
  cin >> a >> b >> c >> d >> e;
   
  cout << a << "\n"  << b << "\n" << c << "\n" << d << "\n" << e << "\n";
    

  return 0;
   
}


// code ends here.
//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/B



/*  Discussion

Error  handaling :

1- make sure you use the correct data type.Or you will get wrong answer.



2 - A common error of this problem is   " wrong output format Expected EOLN "  even after getting the right answer.It occurs because 
your output is not in correct  form because you are using extra white or blank spaces. Don't use any extra white spaces if it doesn't demand it.
for example : 


cout << a << " \n"  << b << "  \n" << c << " \n" << d << " \n" << e << " \n";  // wrong answer
cout << a << "\n"  << b << "\n" << c << "\n" << d << "\n" << e << "\n"; // right answer

 
 we got error for using extra blank spaces inside  "\n".
 
 
 fun fact :  you won't find no difference between two output in your computer.But Online Judges strictly maintain output form.



*/



