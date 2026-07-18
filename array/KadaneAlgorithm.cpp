#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int maxSubArray(int arr[], int n){
    int curSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i ++){
        curSum = max(arr[i], curSum + arr[i]);
        maxSum = max(maxSum, curSum);
    }
    return maxSum;
}
int main(){
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    int ans = maxSubArray(arr, n);
    cout << "maxSum:" << ans << endl;

    system("pause");
    return 0;
}
//最大子数组和