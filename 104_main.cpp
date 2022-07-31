#include<stdio.h>
int main(){
	unsigned long long n = 123456789, c = 0;
	for(;n>0;c+=n%10,n/=10){}
	printf("%d",c);	
}
