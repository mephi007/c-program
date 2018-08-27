#include <iostream>
using namespace std;


int fact(int n)
{
	int f=1;
	while(n>=1)
	{
		f=f*n;
		n--;
	}

	return f;
}

int main()
{
	int num,tem,sum,rem;

	cout<<"enter number\n";
	cin>>num;
	tem = num;
	sum=0;

	while(tem>0)
	{
		rem = tem%10;
		sum = sum + fact(rem);
		tem = tem/10;
	}

	if(sum ==num)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}