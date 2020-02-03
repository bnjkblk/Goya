#include<stdio.h>
int main(){
	char c;
	c=getchar();
	if(c>='a'&&c<='z'||c>='A'&&c<='Z'){
		printf("%c is alpha\n",c);
		
	
	}
	else
		printf("%c isn't alpha\n",c);
	return 0;
} 
