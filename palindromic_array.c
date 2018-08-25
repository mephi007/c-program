#include <iostream>
using namespace std;

int main()
{
	int n, a[20], b[20], i,j,rem, rev;
	rev =0;
	int flag = 1;
	cout<<"enter the number of element for array\n";
	cin>>n;

	cout<<"enter array\n";
	for(i =0 ; i< n ; i++)
	{
		cin>>a[i];
	}

	for(int i=0 ; i<n ; i++)
    {
       		b[i]=a[i];
           
           while(b[i]>0)
           {
               
               
              rem = b[i]%10;
              rev = rev*10 +rem;
              b[i]=b[i]/10;
          }
           
           if( rev != a[i])
            {
                flag=0;
                
            }
        }
          
        
             
       
    
    
    if(flag == 0)
    {
        cout<<"0";
        
    }
    else cout<<"1";
}