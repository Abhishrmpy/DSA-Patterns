#include <iostream>
using namespace std;

int main() {
    int n = 7; // height of each letter

    for (int i = 0; i < n; i++) {

        // ----- A -----
        for (int j = 0; j < n; j++) {
            if ((j == 0 || j == n - 1) && i != 0 ||
                (i == 0 || i == n / 2) && (j > 0 && j < n - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << "  ";

        // ----- B -----
        for (int j = 0; j < n; j++) {
            if (j == 0 ||
                (j == n - 1 && i != 0 && i != n / 2 && i != n - 1) ||
                ((i == 0 || i == n / 2 || i == n - 1) && j < n - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << "  ";

        // ----- H -----
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == n / 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << "  ";

        // ----- I -----
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == n / 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << "  ";

        // ----- S -----
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n / 2 || i == n - 1 ||
                (j == 0 && i < n / 2) ||
                (j == n - 1 && i > n / 2))
                cout << "*";
            else
                cout << " ";
        }
        cout << "  ";

        // ----- H -----
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == n / 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << "  ";

        // ----- E -----
        for (int j = 0; j < n; j++) {
            if (j == 0 || i == 0 || i == n / 2 || i == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "  ";

        // ----- K -----
        for (int j = 0; j < n; j++) {
            if (j == 0 || i + j == n / 2 || i - j == n / 2)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl; // move to next line after each row
    }

    return 0;
}
