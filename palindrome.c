#include <iostream>
using namespace std;

int main()
{
	int num, n, rem, rev;
	rev=0;

	cout<<"enter number\n";
	cin>>n;

	num= n;

	while(num != 0)
	{
		rem= num%10;
		rev = rev*10 + rem;
		num = num/10; 
	}

	cout<<rev;
}
