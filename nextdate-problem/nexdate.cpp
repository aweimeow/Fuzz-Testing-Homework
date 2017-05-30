#include <iostream>

using namespace std;

// Return the next date of input date
int main(void) {
    int y, m, d, edgeday;

    cin >> y >> m >> d;

    // Validate the input
    if (y < 1812 || y > 2013 || m < 1 || m > 12 || d < 1 || d > 31) {
        cout << "InvalidInput\n";
        return 0;
    }

    // Distinguish the edge day
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        edgeday = 31;
    else if (m == 2 && (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)))
        edgeday = 29;
    else if (m == 2)
        edgeday = 28;
    else
        edgeday = 30;
    
    // Validate the edge day
    if (d > edgeday) {
        cout << "InvalidInput\n";
        return 0;
    }

    // Generate next date
    if (d + 1 > edgeday) {
        if (m + 1 > 12) {
            y++;
            m = d = 1;
        } else {
            m++;
            d = 1;
        }
    } else {
        d++;
    }

    cout << y << m << d;

    return 0;
}
