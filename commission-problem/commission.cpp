#include <iostream>

using namespace std;

// Return the commission value or invalid input or program terminates
int main(void) {
    int l, s, b;
    float sales, comm;

    cin >> l >> s >> b;

    // Validate the input
    if (l < -1 || l == 0 || l > 70 || s < 1 || s > 80 || b < 1 || b > 90) {
        cout << "InvalidInput\n";
        return 0;
    } else if (l == -1) {
        cout << "ProgramTerminates\n";
        return 0;
    }

    // Calculate the sales
    sales = l * 45 + s * 30 + b * 25;

    // Calculate the commission
    if (sales >= 1800)
        comm = 0.1 * 1000 + 0.15 * 800 + 0.2 * (sales - 1800);
    else if (sales >= 1000)
        comm = 0.1 * 1000 + 0.15 * (sales - 1000);
    else
        comm = 0.1 * sales;

    // Format the answer
    cout << comm << endl;
    return 0;
}
