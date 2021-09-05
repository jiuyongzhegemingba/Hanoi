#include<iostream>
using namespace std;

void hanoi(int n,char post1='A',char post2='B',char post3='C')
{
	if(n==1)
	{
		cout<<post1<<"-->"<<post2<<endl;
	}
	else
	{
		hanoi(n-1,post1,post3,post2);
		hanoi(1,post1,post2,post3);
		hanoi(n-1,post3,post2,post1);
	}
}
 
int main()
{
	hanoi(3);
	
	return 0;
}
