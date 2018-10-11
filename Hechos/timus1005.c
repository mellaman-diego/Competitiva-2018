#include <stdio.h>
#include <math.h>

int main(){
	int a=0; 
	while(!(a<21 && a>1)){
		scanf("%d",&a);
	}
	int min = 1000;
	int arr[a];
	for(int i=0;i<a;i++){
		scanf("%d",&arr[i]);
		if(i=1){
			if((int)fabs(arr[i]-arr[i-1])<min){
			min=(int)fabs(arr[i]-arr[i-1]);
			}
		}
	}
	printf("%d\n",min);
	return 0;
}
