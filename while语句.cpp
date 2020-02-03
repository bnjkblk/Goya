#include<stdio.h>
int main(){
	int i,sum=0;
	i=1;
	while(i<=100){
		sum=sum+i;
		i++;
	}
	printf("1+2+3+4+...+100=\n%d\n",sum);
	return 0;
}

