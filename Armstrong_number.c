#include <iostream>
using namespace std;

int main()
{
	int num, temp, sum,rem;

	cout<<"enter number";
	cin>>num;

	temp = num;
	sum=0;

	while(temp!= 0)
	{
		rem = temp%10;
		sum = sum+ rem*rem*rem;
		temp/10;
	}

	if(sum == num)
	{
		cout<<"yes";
	}
	else 
		{
			cout<<"no";
}

}