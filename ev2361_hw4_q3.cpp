#include <iostream>
#include <string>
using namespace std;

// O log(N) 🤓
// log after invocation to create correct binary structure (Last In First Out,
// AKA, Stack) constraint of not using strings or array produces non idiomatic
// code ¯\_(ツ)_/¯
void outputBinary(int targetNum) {
    if (targetNum > 1) {
        outputBinary(targetNum / 2);
    }
    int result = targetNum % 2;
    cout << result;
}

int main() {
    int targetBinaryNumber;
    cout << "Enter decimal number:" << endl;
    cin >> targetBinaryNumber;

    cout << "The binary representation of " << targetBinaryNumber << " is ";
    outputBinary(targetBinaryNumber);
}