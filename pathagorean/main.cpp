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
    double dblOpposite = 13.0;
    double dblAdjacent = 6.0;
    double dblHypotenuse = 0;

    dblHypotenuse = sqrt(pow(dblOpposite, 2)+ pow(dblAdjacent, 2));

    cout << fixed;
    cout << setprecision(3);

    cout << "opposite = " << dblOpposite << endl << "adjacent = " << dblAdjacent << endl;
    cout << "hypotenuse = " << dblHypotenuse << endl;

    return 0;
}
