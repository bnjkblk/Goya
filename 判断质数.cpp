#include<stdio.h>
int main(){
	int a,i;
	printf("������һ������\n");
	scanf("%d",&a);
	for(i=2;i<a;i++){
		if(a%i==0)
			break;
	}
	if(i==a||1==a)
		printf("%d ������\n",a);
	else
		printf("%d ��������\n",a);
	return 0;
} 
