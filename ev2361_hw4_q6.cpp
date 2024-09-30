#include <iostream>
#include <string>
using namespace std;

bool hasMoreEvenThanOddDigits(int integer) {
    string integerToString = to_string(integer);
    int numberOfEvens = 0, numberOfOdds = 0;

    for (int i = 0; i < integerToString.length(); i++) {
        int currentInteger = integerToString[i];

        if (currentInteger % 2 == 0) {
            numberOfEvens++;
        } else {
            numberOfOdds++;
        }
    }

    return numberOfEvens > numberOfOdds;
};

int main() {
    int targetInteger;

    cout << "Enter positive integer: " << endl;
    cin >> targetInteger;
    for (int currentInteger = 1; currentInteger <= targetInteger;
         currentInteger++) {
        if (hasMoreEvenThanOddDigits(currentInteger)) {
            cout << currentInteger << endl;
        }
    }
    return -1;
}