#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int B1, B2, B3;
        cin >> B1 >> B2 >> B3;

        int full = B1 + B2 + B3;

        if (full <= 1)
            cout << "Water filling time" << endl;
        else
            cout << "Not now" << endl;
    }

    return 0;
}