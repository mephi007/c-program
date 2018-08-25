#include <iostream>
using namespace std;

int main()
{
	int i, j , n;
	cout<<"enter number";
	cin>>n;
	
	for(i = 1 ; i<= n ; i++)
	{
		
		for(j =1 ; j<= n ; j++)
		{
			if(j<=i)
			{
				if(j%2 ==0)
				{
					cout<<'0';
				}
				else cout<<'1';
			}
			else cout<<" ";
		}
		cout<<endl;
	} 
}