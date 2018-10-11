#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int partidos[n];
	for(int i=0;i<n;i++){
		scanf("%d",&partidos[i]);	
	}
	int size_T=sizeof(partidos)/sizeof(partidos[0]);
	sort(partidos,partidos+size_T);
	int mi=(n/2)+1;
	int cont=0;

	for(int i=0;i<mi;i++){
		cont+= (partidos[i]/2)+1;
	}
	printf("%d\n",cont);
	return 0;
}
