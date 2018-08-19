#include <iostream>

using namespace std;

void star_with_space(int);

int main()
{
	int n;
	cout<<"enter the number of rows: \n";
	cin>>n;
	cout<<endl;
	star_with_space(n);
	return 0;

}

void star_with_space(int n)
{
	
	int i, j;
	for(i = 1 ; i <=n; i++)
	{
		for(int space=1 ; space<=n-i ; space++ )
		{
			cout<<" ";

		}
		
		for(j = 1 ; j<= i ; j++)
		{
			cout<<"*";
		}
	cout<<endl;
	}
}