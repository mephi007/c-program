#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//code
		//code
	
	    int x,y,ans2;
	    double ans;
	    cout<<"enter base";
	    cin>>x;
	    cout<<"enter number";
	    cin>>y;
        ans = log(y)/log(x);
        ans2 = (int)ans;
        if(ans == ans2)
        {
            cout<<"1";
        }
        else {
            cout<<"0";
   }
	
   cout<<endl;
	return 0;
}