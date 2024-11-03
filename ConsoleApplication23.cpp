#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    float x, Z, dob;
    cout << "Enter x: ";
    cin >> x;
    dob = 1;
    for (int i = 1; i <= 5; i++) {
        dob *= tan(i * x);
    }
    Z = dob + sqrt(x);
    cout << "the result is " << Z << endl;
}
