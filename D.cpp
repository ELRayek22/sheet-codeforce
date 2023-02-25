/*
D. Difference
Given four numbers A, B, C and D. Print the result of the following equation :

 X = (A * B) - (C * D).

Input
Only one line containing 4 separated numbers A, B, C and D ( - 105  ≤  A, B, C, D  ≤  105).

Output
Print "Difference  =  " without quotes followed by the equation result.
*/



#include<iostream>
using namespace std;

int main()
{
	long long a,b,c,d;
	cin>>a>>b>>c>>d;

	cout<<"Difference = "<<(a*b)-(c*d)<<"\n";
}