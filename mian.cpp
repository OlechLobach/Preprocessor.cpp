#include "lib/lib.h"

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Min of " << a << " and " << b << " is: " << MIN(a, b) << endl;
    cout << "Max of " << a << " and " << b << " is: " << MAX(a, b) << endl;
    cout << "Square of " << a << " is: " << SQUARE(a) << endl;
    cout << "Power of " << a << " to the 3rd: " << POWER(a, 3) << endl;

    if (IS_EVEN(a)) {
        cout << a << " is even." << endl;
    }
    else {
        cout << a << " is odd." << endl;
    }

    if (IS_ODD(b)) {
        cout << b << " is odd." << endl;
    }
    else {
        cout << b << " is even." << endl;
    }

    return 0;
}
}