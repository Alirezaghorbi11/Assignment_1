#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string firstname, lastname;
    vector <float> unit(3);
    float Avg;
    cout << "Enter you'r name \n";
    cin >> firstname ;
    cout << "\n & last name : ";
    cin >> lastname;\
    for (int i = 0; i < 3; i++) {
        cout << "Enter you'r unit  " << i+1;
        cin >> unit[i];
    }
    
    Avg = (unit[0] + unit[1] + unit[2]) / 3;
    if (Avg >= 17)
        cout << "Great" << endl;
    else if (Avg < 17 && Avg >= 12)
        cout << "Normal" << endl;
    else if (Avg < 12)
        cout << "Fail" << endl;
}