#include <iostream>
using namespace std;

int main()
{
int i,k,j,m,n,l;

cout<<"enter row\n";
cin>>n;
l=n;
for(i=1 ; i<=n ; i++)
{
	m=n;
	for(j=1 ; j<=n*m ; j++)
	{
		for(k=l ; k >=1 ; k--)
		{
			cout<<m;
		}
		m--;
	}
	l--;
	cout<<endl;
}

}