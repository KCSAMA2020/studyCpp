#include <iostream>
using namespace std;
void twoSum(int arr[], int n, int target){
    int left = 0, right = n - 1;

    while (left < right){
        int sum = arr[left] + arr[right];
        if (sum == target){
            cout << left + 1 << " " << right + 1 << endl;
            return ;
        }
        else if(sum < target){
            left ++;
        }
        else {
            right --;
        }
    }
}

int main(){
    int n, target;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    cin >> target;
    twoSum(arr, n, target);
    system("pause");
    return 0;
}
//有序数组的两数之和