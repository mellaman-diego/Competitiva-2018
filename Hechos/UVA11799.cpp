#include <bits/stdc++.h>

using namespace std;

int main (){
	int n;
	cin >> n;
	int casos[n],max[n];
	for(int i=0 ;i<n ; i++){
		cin >> casos[i];

		max[i]=0;
		int s;
		for(int j=0; j<casos[i] ;j++){
		
			cin >> s;
			if(s>max[i]){
				max[i]=s;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout << "Case " << i+1 << ": " << max[i]<<endl; 
	}

	return 0;
}