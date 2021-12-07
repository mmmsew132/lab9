#include<iostream>
#include<string>

using namespace std;

int main() {
    int age, height, prop;
    string status;

    cout << "Enter your age: ";
    cin >> age;
    if (age <= 20) {
        cout << "Enter your height: ";
        cin >> height;
        if (height < 160) {
            status = "UNFRIEND";
        } else {
            if (height < 175) {
                status = "FRIEND";
            } else {
                cout << "Enter your property: ";
                cin >> prop;
                if (prop > 69e6) {
                    status = "MARRIED";
            } else {
                status = "ONE-NIGHT-STAND";
            }
            }
        }
    } else {
        if (age < 30) {
            cout << "Enter your property: ";
            cin >> prop;
            if (prop > 1e7) {
                status = "BEST FRIEND";
            } else {
                status = "UNFRIEND";
            }
        } else {
            status = "UNFRIEND";
        }
    }
    cout << "Your status = " << status;
  return 0;
}