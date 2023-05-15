// https://leetcode.com/problems/determine-the-winner-of-a-bowling-game

class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int sum1 = player1[0], sum2 = player2[0];
        int n = player1.size();
        for(int i=1;i<n;i++){
            if(player1[i-1] == 10){
                sum1 += player1[i]*2;
            }
            else{
                sum1 += player1[i];
            }
            if(player2[i-1] == 10){
                sum2 += player2[i]*2;
            }
            else{
                sum2 += player2[i];
            }
        }
        if(sum1>sum2){
            return 1;
        }
        else if(sum2>sum1){
            return 2;
        }
        else{
            return 0;
        }
    }
};