#include <iostream>
using namespace std;

int main()
{
	int a[20], fr[20],n,i,j,count;

	cout<<"enter element number\n";
	cin>>n;

	cout<<"enter array\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		fr[i]=-1;
	}

	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
				{
				count++;
				fr[j]= 0;
				}

		}

		if(fr[i] !=0)
		{
			fr[i] = count;
		}
	}

	for(i=0; i<n; i++)
    {
        if(fr[i]!=0)
        {
           cout<<a[i]<<" "<<fr[i];
    }
}



}