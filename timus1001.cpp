#include <iostream>
#include <cmath>
//hecho con ayuda de compañero
using namespace std;

int main(){
	double nums[131072];
	unsigned long long aux;
	int sum=0;

	while(scanf("%llu",&aux)!=EOF){
		nums[sum]=(double) sqrt(aux + 0.0);
		sum++;
	}
	
	for(int i=sum-1;i>-1;i--){
		printf("%.4lf\n",nums[i]);
	}
	
	return 0;
}