#include <iostream>
using namespace std;

int main()
{
	int i, j , n , num;
	cout<<"enter number\n";
	cin>>n;
int m =n;
	for(i=1 ; i<= n+1 ; i++)
	{
		num = m;
		for(j = 1 ; j <= n+1 ; j++)
		{
			if( j<= (n+2-i))
			{
				cout<<num;
				num--;
			}
			else
			{
				cout<<" ";
			}

		}
		
		cout<<endl;
		m--;
	}
}