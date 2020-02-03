#include<stdio.h>
#include<math.h>
int main(){
	float a=3.5,b=4.5,c=5.5,s,area;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("a=%f\tb=%f\tc=%f\n",a,b,c);
	printf("area=%f\n",area);
	return 0;
	
} 
