#include <iostream>
using namespace std;

int lcm_func(int , int);
int main() {
	//code
	int a,b,lcm,hcf;
	cout<<"enter two number: \n";
	cin>>a>>b;
	lcm = lcm_func(a,b);
	hcf = (a*b)/lcm;
	cout<<lcm<<" "<<hcf;
	return 0;
}

int lcm_func(int a , int b)
{
	int max;
	max= (a>b)?a:b;
	do{
		if(max%a == 0 && max%b == 0)
		{
			return max;
			break;
		}
		else { max++;}

	} while(true);

	
}

