#include<stdio.h>
#include<conio.h>
#include<math.h>
int add(int a,int b)
{
	int c=a+b;
	return c;
}
int sub(int a,int b)
{
	return(a-b);
}
int mul(int a,int b)
{
	return(a*b);
}
int div(int a, int b)
{
	float c;
	c=(float) a/ (float)b;
	return c;
}
int squarert(int a)
{
	double c;
	c=sqrt(a);
	return c;
}
int up(int a, int b)
{
   int c;
   c=pow(a,b);
   return c;
}
int sq(int a)
 {
 	return(pow(a,2));
 }
 int cu(int a)
 {
 	return(pow(a,3));
 }
 int inv(int a)
 {
 	return((float) 1/a);
 }
int main()
{
	int choice, x , y;
	float result;
    
    printf("enter your choice from the option given below:\n");
    printf("1.ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.SQUARE ROOT\n");
    printf("6.X^Y\n");
    printf("7.X^2\n");
    printf("8.X^3\n");
    printf("9.1/X\n");
    printf("10.X^(1/Y)\n");
    printf("11.X^(1/3)\n");
    printf("12. 10^X\n");
    printf("13. X!");
    printf("14. %\n");
    printf("15. modulus\n");
    printf("16.sin(X)\n");
    printf("17.cos(X)\n");
    printf("18.tan(X)\n");
    printf("19.cosec(X)\n");
    printf("20. cot(X)\n");
    printf("21. sec(X)\n");
    printf("22.log10(X)\n");
    scanf("%d", &choice);
   
    
   switch(choice)
    {
    	case 1:
    		 printf("enter operands :\n");
             scanf("%d%d",&x,&y);
             
             result= add(x,y);
             printf("sum of %d and %d is = %.2f", x,y,result);
             break;
    	 case 2:
    		 printf("enter operands :\n");
             scanf("%d%d",&x,&y);
             
             result=sub(x,y);
             printf(" difference of %d and %d is= %.2f", x,y,result); 
             break;
    		 
    	 case 3:
    	 	  printf("enter operands:\n");
    	 	  scanf("%d%d",&x,&y);
    	 	  result=mul(x,y);
    	 	  printf("multiplication of %d and %d is= %.2f", x,y,result);
    	 	  break;
    	 case 4:
    	 	  printf("enter operands:\n");
    	 	  scanf("%d%d",&x,&y);
    	 	  
    	 	  result= div(x,y);
    	 	  printf("division of %d and %d is= %f", x,y, result);
    	 	  break;	  
    	 case 5:
    	 	  printf("enter operands:\n");
    	 	  scanf("%d",&x);
			  result=squarert(x);
			  printf("squareroot of %d=%.2f", x,result);
			  break;
		 case 6:
    	 	  printf("enter base:\n");
    	 	  scanf("%d",&x);	
			   printf("power:\n");
			   scanf("%d",&y);
			   result=up(x,y);
			   printf("%d raise to %d = %.1f",x,y,result);
			   break;
		 case 7:	   
			   printf("enter number:");
			   scanf("%d",&x);
			   result=sq(x);
			   printf("square of %d = %.1f",x,result);
			   break;
		 case 8:
			   printf("enter number:");
			   scanf("%d",&x);
			   result=cu(x);
			   printf("cube of %d = %.1f",x,result);
			   break;
		 case 9:
			   printf("enter number:");
			   scanf("%d",&x);
			   result=inv(x);
			   printf("inverse of %d = %f",x,result);
			   break; 	       
	}
			    

    
getch();
}
/* int add(int a,int b)
 {
    int c=a+b;
 	return(c);
 }
 int sub(int a, int b) */
