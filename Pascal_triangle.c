#include <iostream>
using namespace std;

int fact(int);
int combi(int , int);
void print(int );

int main()
{
	int line;
	cout<<"enter row number\n";
	cin>>line;
	print(line);
	return 0;
	
}

void print(int line)
{
	int i, j , k, r;



	for(i=0; i<=line ; i++)
	{
		k=1;
			r=0;
		for(j=1 ; j<=2*line -1 ; j++)
		{
			if(j>=line+1-i && j<= line-1+i && k)
			{
				cout<<combi(i-1, r);
				r++;
				k=0;
			}
			else 
			{
				cout<<" ";
				k=1;
			}

		}
		cout<<endl;
	}
}

int combi(int n , int r)
{
	int res = ((fact(n))/(fact(r)*fact(n-r)));

	return res;
}



int fact(int n)
{
	int f=1;
	while(n>=1)
	{
		f=f*n;
		n--;
	}

	return f;
}