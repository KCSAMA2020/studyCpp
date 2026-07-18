#include <iostream>
using namespace std;

int deduplicate(int arr[], int n){
    if (n == 0) return 0;
    int slow = 0;
    for (int fast = 1; fast < n; fast ++){
        if (arr[fast] != arr[slow]){
            slow ++;
            arr[slow] = arr[fast];
        }
    }
    return slow + 1;
}
int main(){
    int n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i ++){
        cin >> arr[i];
    }

    int count = deduplicate(arr, n);
    
    cout << count << endl;
    for (int i = 0; i < count; i ++){
        cout << arr[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}

//删除重复项