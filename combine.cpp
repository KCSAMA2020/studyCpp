#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSorted(const vector<int>& a, const vector<int>& b){
    const int* pa = a.data();
    const int* pb = b.data();
    vector<int> result;

    while (pa < a.data() + a.size() && pb < b.data() + b.size()){
        if (*pa <= *pb){
            result.push_back(*pa);
            ++pa;
        }
        else{
            result.push_back(*pb);
            ++pb;
        }
    }
    while (pa < a.data() + a.size()){
        result.push_back(*pa);
        ++pa;
    }
    while (pb < b.data() + b.size()){
        result.push_back(*pb);
        ++pb;
    }
    
    return result;
}

int main(){
    vector<int> a, b;
    int num;

    while (cin >> num && num != -1){
        a.push_back(num);
    }
    while (cin >> num && num != -1){
        b.push_back(num);
    }

    vector<int> trueData = mergeSorted(a, b);
    for (size_t i = 0; i < trueData.size(); ++ i){
        if(i > 0) cout << ' ';
        cout << trueData[i];
    }
    system("pause");
    return 0;
}