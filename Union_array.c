#include <iostream>
using namespace std;

int main()
{
	int a1[]={1,2,3,4,5};
	int a2[]={2,3,5,8,6,5,4};

	int n= sizeof(a1)/sizeof(a1[0]);
	int m= sizeof(a2)/sizeof(a2[0]);

	cout<<n<<m;

}

// 	int i=0,j=0;

// 	while(i<n  && j<m)
// 	{
// 		if(a1[i] < a2[j])
// 		{
// 			cout<<a1[i];
// 			i++;
// 		}
// 		else if(a2[j] < a1[i])
// 		{
// 			cout<<a2[j];
// 			j++;
// 		}
// 		else
// 		{
// 			cout<<a2[j];
// 			j++;
// 			i++;
// 		}
// 	}

// 	while(i< n)
// 		cout<<a1[i];

// 	while(j<m)
// 		cout<<a2[j];
// }