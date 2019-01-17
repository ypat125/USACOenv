#include <iostream>
#include <fstream>

using namespace std;

int main() {

    int t;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        int a, b;

        cin >> a;
        cin >> b;

        if (a < b) {
            printf("<");
        } else if (a > b) {
            printf(">");
        } else {
            printf("=");
        }
    }

    return 0;
}