#include <iostream>
#include <string>

using namespace std;

// int check_vowels(char c)
// {
// 	switch(c)
// 	{
// 		case 'a':
// 		case 'A':
// 		case 'e':
// 		case 'E':
// 		case 'i':
// 		case 'I':
// 		case 'o':
// 		case 'O':
// 		case 'u':
// 		case 'U':
// 		case 'v':
// 		case 'V':
// 		return 1;
// 		default:
// 		return 0;
					
// 	}
// }

int main()
{
	char s[100] , t[100],c;
	int i,j;

	cout<<"enter string\n";
	cin>>s;


	for(i=0; s[i] != '\0';i++)
	{
		c=s[i];
		if(c != 'a'|| c != 'A'||c != 'e' ||c != 'E' ||c != 'i' ||c != 'I' ||c != 'o' ||c != 'O' ||c != 'u' ||c != 'U' ||c != 'v' ||c != 'V')
		{
			t[j]= s[i];
			j++;

		}
	}

	t[j]='\0';

	
	cout<<t;
	return 0;
}