/// Author : Prathamesh Patil

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  	// Initializations
	vector<int> cost = {10, 3, 4, 6, 5, 2};
	vector<int> profit = {27, 35, 21, 28, 29, 5};
	int capacity = 8;
	int n = cost.size();
	int m = capacity;
	vector<vector<int>> dp;
  
  	// Creating the DP Matrix
	for(int i=0; i<=n; i++){
		vector<int> temp(capacity+1, 0);
		dp.push_back(temp);
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(j>=cost[i-1] && dp[i-1][j-cost[i-1]] + profit[i-1] > dp[i-1][j]){
				dp[i][j] = dp[i-1][j-cost[i-1]] + profit[i-1];
			}
			else{
				dp[i][j] = dp[i-1][j];			
			}			
		}
	}
  
  	// Printing the DP Matrix
	cout<<"DP Matrix: "<<endl;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			cout<<dp[i][j]<<" ";		
		}	
		cout<<endl;
	}
  
  	cout<<endl;
  
  	// Finding the selected elements that have been put into the knapsack
	vector<pair<int,int>> knapsack;
  	int i=n, j=m;
	while(i>=1 && j>=1){
		if(dp[i][j] != dp[i-1][j]){
			knapsack.push_back({cost[i-1], profit[i-1]});
			j = j-cost[i-1];
			i--;
		}
		else{
			i--;		
		}
	}
  
  	// Printing the knapsack
	cout<<"Knapsack is: "<<endl;
	for(pair<int,int> element: knapsack){
		cout<<element.first<<" "<<element.second<<endl;
	}

	return 0;
}
