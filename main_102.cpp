#include<stdio.h>
int main(int num, char *argv[]){
	int n; scanf("%d", &n);
	while(num<=n && printf("%d", num) && num++){}
}
