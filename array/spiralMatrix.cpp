#include <iostream>
using namespace std;

void spiralOrder(int matrix[][100], int m, int n){
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right){
        for (int i = left; i <= right; i ++){
            cout << matrix[top][i] << " ";
        }
        top ++;
        for (int i = top; i <= bottom; i ++){
            cout << matrix[i][right] << " ";
        }
        right --;

        if (top <= bottom){
            for (int i = right; i >= left; i --){
            cout << matrix[bottom][i] << " ";
            }
            bottom --;
        }
        if (left <= right){
            for (int i = bottom; i >= top; i --){
            cout << matrix[i][left] << " ";
            }
            left ++;
        }
    }
    cout << endl;
}
int main(){
    int m, n;
    cin >> m >> n;
    int matrix[100][100];
    for (int i = 0; i < m; i ++){
        for (int j = 0; j < n; j ++){
            cin >> matrix[i][j];
            /*
            1 2 3
            4 5 6
            7 8 9
            */
        }
    }
    spiralOrder(matrix, m, n);

    system("pause");
    return 0;
}
//螺旋矩阵