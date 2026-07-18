#include <iostream>
#include <string>
using namespace std;
typedef struct student{
    string name;
    int age;
    float score;
};

int main(){
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    student stu[100];
    for (int i = 0; i < n; i ++){
        cout << "Enter the name, age, and score of student " << i + 1 << ": ";
        cin >> stu[i].name >> stu[i].age >> stu[i].score;
    }
    cout << "\n >= 80 :" << endl;
    for (int i = 0; i < n; i ++){
        if (stu[i].score >= 80){
            cout << stu[i].name << " " << stu[i].age << endl;
        }
    }

    system("pause");
    return 0;
}