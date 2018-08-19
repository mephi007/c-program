#include <iostream>
using namespace std;

void triangle(int);

int main()
{
	int n;
	cout<<"enter the number of row: \n";
	cin>>n;
	cout<<endl;
	triangle(n);
	return 0;
}

void triangle(int n)
{
	int space, i , j;
	for(i =1 ; i<= n ; i++)
	{
		for(space = 1 ; space<= n -i; space++)
		{
			cout<<" ";

		}
		for(j=1 ; j<=i ; j++)
		{
			cout<<"* ";
		}
	cout<<endl;
	}
}