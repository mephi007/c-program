#include <iostream>
using namespace std;

int main()
{
	int a[20], i,j,n,element,len,flag;
	len=0;
	flag=0;

	cout<<"enter element number\n";
	cin>>n;

	cout<<"enter array\n";
	for(i=0;i<n;i++)
		cin>>a[i];

	cout<<"enter element to delete\n";
	cin>>element;

	for(i=0;i<n;i++)

	{
		if(a[i]==element)
		{
			flag=1;
			for(j=i;j<n-1;j++)
			{
				a[j]=a[j+1];
			}
		}

		
	}

	if(flag==0)
	{
		cout<<"not found\n";
	}
	//a[pos]=element;
	else
	{
	for(i=0;i<n-1;i++)
	{
		cout<<a[i]<<" "<<endl;
		len =len+1;
	}
}
	


}