// code starts from here

#include<bits/stdc++.h>
using namespace std;


int main(){
		
    int x , y; 
    
	cin >> x >> y;
    
    cout <<x <<" + "<<y << " = " <<x+y <<"\n";
    cout <<x <<" * "<<y << " = " <<(long long)x*y <<"\n";
    cout <<x <<" - "<<y << " = " <<x-y <<"\n";
	
	return 0;
}

//code ends here.




/* -- Discussion --

//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C

The most common error for this problem is you get a wrong answer  in codeforces submission. But it showed the correct output on your computer.

As this is a unrated problem you won't able to see others test cases which caused wrong answers. Let's fix it ,



Method 1 -  In the problem input connstraints are ,   X, Y (1  =  X, Y  =  10^5 ).

Now Imagine a worst  case for this problem acroding to the connstraints : 

X = 10^5 and Y = 10^5. Now while multiplying  X and Y

cout <<x <<" * "<<y << " = " <<x*y <<"\n";

But wait? x*y = 10^5 * 10^5 = 10^10 .

Now look closely. we know the range of ' int ' is 2*10^9  . But the answer is 10^10 which is overflowing the range of 'int'.And it
caused the wrong answer.How to fix it ? simple just typecast it into ' long long int ' or 'long long' .But how ?

cout <<x <<" * "<<y << " = " <<x*y <<"\n"; // wrongs answer

cout <<x <<" * "<<y << " = " <<(long long)x*y <<"\n"; // right answer.







Method 2 - There is an another approch to handle it which doesn't demand typecast.

take input in the form of  ' long long ' . here is the code
 


int main(){
		
    long long x , y; 
    
	cin >> x >> y;
    
    cout <<x <<" + "<<y << " = " <<x+y <<"\n";
    cout <<x <<" * "<<y << " = " <<x*y <<"\n";
    cout <<x <<" - "<<y << " = " <<x-y <<"\n";
	
	return 0;
}




conclusion : If you still don't understand it, don't think too much .Ask your doubts to your teacher , senior or friends or internet.



*/


