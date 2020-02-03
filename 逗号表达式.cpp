#include<stdio.h>
int main(){
	int a=2,x;
	x=(a=a*3,a=a+1);
	printf("%d\n",x);
	return 0;
}
