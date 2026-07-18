#include <iostream>
#include <vector>
using namespace std;

bool exists(const vector<int>& vec, int val){
    for (int x : vec){
        if (x == val)
            return true;
    }
    return false;
}

vector<int> removeDuplicates(const vector<int>& input){
    vector<int> result;
    for (int val : input){
        if (!exists(result, val)){
            result.push_back(val);
        }
    }
    return result;
}

int main(){
    vector<int> data;
    int num;
    cout << "ађСа:";
    while (cin >> num && num != -1){
        data.push_back(num);
    }
    vector<int> uniqueData = removeDuplicates(data);
    for (size_t i = 0; i < uniqueData.size(); ++ i){
        if (i > 0) cout << ' ';
        cout << uniqueData[i];
    }
    system("pause");
    return 0;
}