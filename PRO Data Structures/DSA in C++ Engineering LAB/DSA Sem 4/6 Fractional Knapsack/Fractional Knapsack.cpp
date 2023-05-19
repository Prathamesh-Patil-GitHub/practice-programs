/// Author: Prathamesh Patil
/* Following program calculates the maximum profit from the
given profit and weight arrays.
The arrays would be sorted according to the profit first and then
the maximum profit would be calculated.
*/

#include <iostream>
#define n 5
using namespace std;

void sortArrays(float arr1[], float arr2[], bool ascending){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(ascending){
                if(arr1[j] > arr1[j+1]){
                    swap(arr1[j], arr1[j+1]);
                    swap(arr2[j], arr2[j+1]);
                }
            }
            else{
                if(arr1[j] < arr1[j+1]){
                    swap(arr1[j], arr1[j+1]);
                    swap(arr2[j], arr2[j+1]);
                }
            }
        }
    }
}

float calculateProfit(float profit[], float weight[], float capacity){
    float x[n]{0};
    int w = 0;
    for(int i=0;i<n;i++){
        if(w+weight[i] <= capacity){
            x[i] = 1;
            w += weight[i];
        }
        else{
            x[i] = (capacity-w)/weight[i];
            break;
        }
    }
    
    float ans = 0;
    for(int i=0;i<n;i++){
        ans += x[i]*profit[i];
    }
    return ans;
}

int main() {
    float profit[n]{0}, weight[n]{0};
    float capacity = 12;
    
    for(int i=0;i<n;i++){
        cout<<"Enter the profit and weight (space seprated): "<<endl;
        cin>>profit[i]>>weight[i];
    }
    
    // Sorting the profit and weight for taking biggest profit first
    sortArrays(profit, weight, false);
    
    // Calculate the maximum profit
    float ans = calculateProfit(profit, weight, capacity);
    
    cout<<"Final Profit: "<<ans;
    return 0;
}


/* Test case 0:
Enter the profit and weight (space seprated): 
20 6
Enter the profit and weight (space seprated): 
13 4
Enter the profit and weight (space seprated): 
12 4
Enter the profit and weight (space seprated): 
10 3
Enter the profit and weight (space seprated): 
6 5
Final Profit: 39*/