#include <bits/stdc++.h>


using namespace std;

int main(){
	int a=1;
  
  cin >> a;
  while(a!=0){
    
    int nums[a+1][2];
    for(int i=0; i<a+1 ;i++){
      cin >> nums[i][0] >> nums[i][1];
    }
    for(int i=1;i<a+1;i++){
      if(nums[0][0] < nums[i][0] && nums[0][1] < nums[i][1]){
          cout << "NE"<< endl;
      }else if(nums[0][0] < nums[i][0] && nums[0][1] > nums[i][1]){
          cout << "SE" << endl;
      }else if(nums[0][0] > nums[i][0] && nums[0][1] < nums [i][1]){
         cout << "NO" << endl;
      }else if(nums[0][0] > nums[i][0] && nums[0][1] > nums [i][1]){
        cout << "SO" << endl;
      }else if(nums[0][0] == nums[i][0] || nums[0][1] == nums[i][1]){
         cout << "divisa" << endl;
      }  
    }

    cin >> a;
 }   
  return 0;
}
