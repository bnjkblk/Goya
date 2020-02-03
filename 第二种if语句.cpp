#include<stdio.h>
int main(){
	int x,y,max;
	printf("请输入两个数：\n");
	scanf("%d%d",&x,&y);
	if(x<y){
		max=y;
		
	}
	else{
		max=x;
	}
	printf("max=%d\n",max);
	return 0;

}
