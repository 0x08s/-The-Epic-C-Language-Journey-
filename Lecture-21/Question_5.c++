#include <iostream>
using namespace std;

int main() {

    int x, y;

    cout << "Value of x: ";
    cin >> x;

    cout << "Value of y: ";
    cin >> y;

    float z = static_cast<float>(x)/y;

    cout << z;

    return 0;
}