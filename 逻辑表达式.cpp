#include<stdio.h>
int main(){
	int i;
	scanf("%d",&i);
	if(i<60)
		printf("Fail!!\n");
	else if(i>=60&&i<=85)
		printf("Good!!!\n");
	else
		printf("That is Cool!!!\n"); 
	return 0;
}
