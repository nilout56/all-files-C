#include<stdio.h>

int main(){
	
	int number[10];
	int i;
	
	for(i=1;i<11;i++)
	   number[i-1] = i*i;
	for(i=0;i<10;i++)
	   printf("%d ", number[i]);
	
	
	
	return 0;
}
