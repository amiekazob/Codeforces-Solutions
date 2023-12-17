// code starts from here

#include<bits/stdc++.h>
using namespace std;

int main(){		
  long long a , b , c , d;	    
  cin >> a >> b >> c >> d;	    
  cout<<"Difference = "<< ( a * b ) - ( c * d ) << "\n";	    
  return 0;	
}
	
//code ends here.	
	
/* -- Discussion --
	
//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D
	
	
Tips : A common mistake every beginner made they think too much about input form.If input varaible are named  a, b and it's not mandatory for
	you to named your variable same as problem. you can choose any name for your variable.For example
	     
	 problem says : there are four int variable a,b,c,d . it means int a, b, c, d;
	     
	If i named these variable in my code like this ,  int p,q,r,s; it is also correct. always take varible named which make sense.Don't worry about variable name.
	But be careful about data type..when to take  ' long long ' ,  ' int ',  etc.But don't care abour name.
	     
	     
	     
	     
Error  handling : - 
	
The most common error for this problem is you get a wrong answer  in codeforces submission. But it showed the correct output on your computer.
	
As this is a unrated problem you won't able to see others test cases which caused wrong answers. Let's fix it ,
	
	
	
Method 1 -  In the problem input connstraints are ,   A, B, C, D (1  =  A, ,B , C ,D  =  10^5 ).
	
Now Imagine a worst  case for this problem acroding to the connstraints : 
	
A = 10^5 , B = 10^5, C = 10^5 , D = 10^5. Now while multiplying  (A*B) it will overflow the range of int and stores a garbage value.which will
caused wrong answerr.So it's better to use typecase method or take input in the form of  ' long long ' .In my previous tutorial i had discussed the 
typecast method. So i am not gonna discuss it here.Yout better check that code 
	
link : https://github.com/amiekazob/Codeforces-Solutions/blob/main/ICPC%20Assiut%20University%20Codeforces%20%20Solutions/Sheet%20%231%20(Data%20type%20-%20Conditions)/C.%20Simple%20Calculator.cpp
	
Here i take the input in the form of long long . So i don't need to typecase it anymore.
	
	
Conclusion : If you still don't understand it, don't think too much .Ask your doubts to your teacher , senior or friends or internet.
	
	
	
*/
	
	
