#include<stdio.h>
int main(){
	int sign=1;
	double sum=1.0,term,deno=2.0;
	while(deno<=100){
		sign=-sign;
		term=sign/deno;
		sum=sum+term;
		deno++;
	}
	printf("sum=%f\n",sum);
	return 0;
} 
