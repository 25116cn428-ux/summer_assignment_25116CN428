#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Handle 0 separately
    if (num == 0) {
        count = 1;
    } else {
        // Make negative numbers positive
        num = abs(num);

        while (num > 0) {
            num /= 10;
            count++;
        }
    }

    cout << "Number of digits = " << count;

    return 0;
}