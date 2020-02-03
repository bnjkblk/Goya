#include<stdio.h>
int main(){
	enum workday{
		mon=1,tue,wed,thu,fri
	} a,b,c,d,e;
	a=mon;
	b=tue;
	c=wed;
	d=thu;
	e=fri;
	printf("Monday:%d,Thuesday :%d,wednesday :%d,Thursday :%d,Friday :%d",a,b,c,d,e);
	return 0;
} 
