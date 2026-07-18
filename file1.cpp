#include <iostream>
using namespace std;
double height = 0;
double weight = 0;
double BMI;
string result;

double bmi_s(double x, double y)
{
    double bmi = y / (x*x);
    return bmi;
}

string result_s(double x)
{
    if (x >= 30.0){
        return "so Fat";
    }
    else if (x>25.0){
        return "Fat";
    }
    else if (x > 18.5){
        return "normal";
    }
    else {
        return "thin";
    }
}

int main()
{
    cout << "H:" << endl;
    cin >> height;
    cout << "W:" << endl;
    cin >> weight;

    BMI = bmi_s(height, weight);
    cout << "BMI:" << BMI << endl;

    result = result_s(BMI);
    cout << result << endl;
    
    system("pause");
    return 0;
}