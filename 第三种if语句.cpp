#include<stdio.h>
int main(){
	char c;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û£º\n");
	c=getchar();
	if(c<32){
		printf("%c is control character\n",c);
		
	}
	else if(c>='0'&&c<='9'){
		printf("%c is digit\n",c);
		
	}
	else if(c>='A'&&c<='Z'){
		printf("%c is big alpha\n",c);
		
	}
	else if(c>='a'&&c<='z'){
		printf("%c is small alpha\n",c); 
		
	}
	else 
		printf("This is an other character\n");
	return 0;
} 
