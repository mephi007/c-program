#include <iostream>
using namespace std;

void printTriplet(int limit);
int main()
{
	int limit;

	cout<<"enter limit\n";
	cin>>limit;

	printTriplet(limit);

	return 0;
}

void printTriplet(int limit)
{
	int a,b,c,n,m;
	c=0;
	m=2;

	while(c<limit)
	{

	for(n=1 ; n<m; n++)
		
		{
			a= m*m - n*n;
			b = 2*m*n;
			c = m*m +n*n;

			if(c>limit)
				break;

			cout<<a<<" "<<b<<" "<<c<<endl;
		}

		m++;

	}
}