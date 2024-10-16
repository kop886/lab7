#include <iomanip> 
#include <iostream>
#include <math.h>
using namespace std;
int main()
{ // {2; 3} h=0.1
    double x, y, c, x1, x2, h;
    cout << "Enter:  {x1 x2} and step h, c ";
    cin >> x1 >> x2 >> h >> c;
    cout << "while" << endl;
    x = x1;
    while (x <= x2 + h) {
        y = pow(x, 3) + pow(x, 1.0 / 2.0) - 3 * c;
        cout << setw(12) << x << setw(15) << y << endl;
        x += h;
    }
}
