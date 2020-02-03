#include<stdio.h>
int main(){
	int x,y,max;
	printf("请输入两个数：\n");
	scanf("%d%d",&x,&y);
	max=x;
	if(max<y){
		max=y;
	}
	printf("max=%d\n",max);
	return 0;
} 
