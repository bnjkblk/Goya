#include<stdio.h>
int main(){
	char c;
	while(true){
		c=getchar();
		if(c>='0'&&c<='9')
			continue;
		printf("%c\n",c);
		if(c==27)
			break;
	}
	return 0;
}

