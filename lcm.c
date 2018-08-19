#include <iostream>
using namespace std;

int lcm(int , int);

int main()
{
	int a,b,out;
	cout<<"enter two distinct number:\n";
	cin>>a>>b;
	out = lcm(a,b);
	cout<<"lcm is: "<<out;
	return 0;
}

int lcm(int a , int b)
{
	int max;
	max= (a>b)?a:b;
	do{
		if(max%a == 0 && max%b == 0)
		{
			return max;
			break;
		}
		else { max++;}

	} while(true);

	
}