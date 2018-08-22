#include <iostream>
using namespace std;

int main()
{
	cout<<"enter the number:\n";
	int n;
	cin>>n;
	for(int i =1 ; i<=n ; i++)
	{
		for (int j = 1; j < 2*n ; j++)
		{
			if(j<= ((n+1)-i) || j>((n-2)+i) )
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
				
		
	}
	cout<<endl;

}
return 0;

}

