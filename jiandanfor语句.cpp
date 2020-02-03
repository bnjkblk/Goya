#include<stdio.h>
int main(){
	int i,sum=0;
	for(i=1;i<=1000;i++){
		sum=sum+i;
	}
	printf("1+2+3+4+....+1000=\n%d\n",sum);
	return 0;
}
