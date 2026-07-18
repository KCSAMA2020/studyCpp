#include <iostream>
#include <algorithm>
using namespace std;
void rotateRight(int arr[], int n, int k){
    k = k % n;
    if (k == 0) return ;

    reverse(arr,arr + n);
    reverse(arr,arr + k);
    reverse(arr + k, arr + n);
}
int main(){
    int n, k;
    cin >> n >> k;

    int arr[100];
    for (int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    rotateRight(arr, n, k);
    for (int i = 0; i < n; i ++){
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}

//循环右移