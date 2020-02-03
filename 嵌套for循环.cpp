#include<stdio.h>
int main(){
	int i,j;
	long t=3,sum=0;
	for(i=1;i<=10;i++){
		for(j=1;j<i;j++){
			t=t*3;
			
		}
		sum=sum+t;
		t=3;
	}
	printf("3+3*3+3*...+=\n%d\n",sum);
	return 0;
}
