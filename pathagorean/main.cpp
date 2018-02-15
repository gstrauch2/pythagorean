/*
 * George Strauch
 *
 * solves for the hypotenuse of a right triangle given
 * the opposite and adjacent values
 *
 * 2-8-17
 */


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double opposite = 13.0;
    double adjacent = 6.0;
    double hypotenuse = 0;

    hypotenuse = sqrt(pow(opposite, 2)+ pow(adjacent, 2));

    cout << fixed;
    cout << setprecision(3);

    cout << "opposite = " << opposite << endl << "adjacent = " << adjacent << endl;
    cout << "hypotenuse = " << hypotenuse << endl;

    return 0;
}