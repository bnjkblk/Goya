#include<stdio.h>
int main(){
	int score;
	printf("ÇëÊäÈë·ÖÊý£º\n");
	scanf("%d",&score);
	if(score<80)
		if(score<70)
			if(score<60)
				printf("E\n");
			else
				printf("D\n");
		else
			printf("c\n");
	else
		if(score<90)
			printf("B\n");
		else
			printf("A\n");
				
			
	return 0;
	

}
