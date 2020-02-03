#include<stdio.h>
int main(){
	int a,i;
	printf("请输入一个数：\n");
	scanf("%d",&a);
	for(i=2;i<a;i++){
		if(a%i==0)
			break;
	}
	if(i==a||1==a)
		printf("%d 是质数\n",a);
	else
		printf("%d 不是质数\n",a);
	return 0;
} 
