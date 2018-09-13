#include <stdio.h>
int main(){
	int g1,g2;
	scanf("%d %d",&g1,&g2);
	int total=g1+g2-2;
	g1--;
	g2--;
	printf("%d %d\n",total-g1,total-g2);
	return 0;
}