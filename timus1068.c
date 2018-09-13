#include <stdio.h>

int main(){
	int a; scanf("%d",&a);
	if(a<0){
		printf("%d\n",(-(a*(a-1))/2) + 1);
	}else if(a>0){
		printf("%d\n",(a*(a+1))/2);
	}else{
		printf("%d\n",1);
	}
	return 0;
}