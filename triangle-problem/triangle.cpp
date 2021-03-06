#include <iostream>

using namespace std;

// Return Equilateral or Isosceles or NotATriangle or Scalene
const char* Triangle(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0)
        return "NotATriangle";
    if (a + b <= c || a + c <= b || b + c <= a)
        return "NotATriangle";
    if (a == b && b == c)
        return "Equilateral";
    if (a == b || a == c || b == c)
        return "Isosceles";
    
    return "Scalene";
}


int main(void) {
    int a, b, c;
    const char* ans;

    cin >> a >> b >> c;

    ans = Triangle(a, b, c);
    cout << ans << endl;

    return 0;
}
