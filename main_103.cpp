#include<stdio.h>
int add(int n, int m){
	return printf("%*c%*c", n, '\r', m, '\r');
}
int main()
{
	printf("%d", add(3, 4));
}
