#include <iostream>
using namespace std;


int main()
{
int i,j,n,num;
char k;

cout<<"enter row\n";
cin>>n;

for(i = 1 ; i<= n ; i++)
{
	k= 'A'; num=1;
	for(j=1 ; j<= 2*n ; j++)
	{
		if(j>=n+1-ii && j<= n+i)
		{
			if(j>= n+1-i && j<= n)
			{
				cout<<k;
				k++
			}
			else
			{
				cout<<num;
				num++;
			}

		}
		else
		{
			cout" "; 
		}
	}
	cout<<endl;
}
}