	// code starts from here
	
	#include<bits/stdc++.h>
	using namespace std;
	
	
	int main(){
			
	    double r ; 
	    
	    cin >> r;
	    
	    const double pi = 3.141592653;
	    
	    double area =  pi * r * r;
	    
		cout << fixed << setprecision(9) << area << "\n";
		
		return 0;
	}
	
	//code ends here.
	
	
	
	/* -- Discussion --
	
	//problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E
	
	
	Tips : A common mistake every beginner made they think too much about input form.If input varaible are named  a, b and it's not mandatory for
	     you to named your variable same as problem. you can choose any name for your variable.For example
	     
	     problem says : there are four int variable a,b,c,d . it means int a, b, c, d;
	     
	     If i named these variable in my code like this ,  int p,q,r,s; it is also correct. always take varible named which make sense.Don't worry about variable name.
	     But be careful about data type..when to take  ' long long ' ,  ' int ',  etc.But don't care abour name.
	     
	     
	     
	     
	Error  handling : - 
	.
	we know two type of data type ' float ' and ' double '  stores decimal value. What is the difference between them?
	float can stores at most 7 digits  after decimal where double can stores 15 digits after decimal .
	
	float a =  2.1123856 ; // is correct because there are 7 digits after decimal.
	
	float b = 2.1123856112856// is not correct.because there are 13 digits after decimal which overflow the range of float.if we forcefully assign
	
	more than 7 digits it will give us a garbage value which will cause wrong answer.
	
	In this case we must take input into "double" form.because the problem demands to print 9 digits after decimal.Because the accuracy range of double is
	15 digits after decimal. As a beginner putting typecast in lines take all variable in double form.(though it's not a better practice).And
	
	 cout << fixed << setprecision(9) , control the precision of tht decimal number. problem demands 9 digits .So setprecision(9); 
	 
	 Note : You can update this precision at most 15 digits like cout << fixed << setprecision(15) ; but not more than 15 otherwise it'will give an wrong answer.
	
	
	Conclusion : If you still don't understand it, don't think too much .Ask your doubts to your teacher , senior or friends or internet.
	
	
	
	*/
	

