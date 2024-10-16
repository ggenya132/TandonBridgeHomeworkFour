#include <iostream>
#include <string>
using namespace std;

const string ASTERIK = "*";
const string SPACE = " ";
void printAsteriks(int numberOfAsteriks, int paddingLeftRight) {
    string result = "";
    for (int i = 0; i < paddingLeftRight; i++) {
        result += SPACE;
    }
    for (int i = 0; i < numberOfAsteriks; i++) {
        result += ASTERIK;
    }
    for (int i = 0; i < paddingLeftRight; i++) {
        result += SPACE;
    }
    cout << result << endl;
}
int main() {
    int numberOfAsteriks;
    cout << "Enter positive integer:" << endl;
    cin >> numberOfAsteriks;
    int paddingPerIteration = 0;

    for (int i = ((2 * numberOfAsteriks) - 1); i > 0; i -= 2) {
        printAsteriks(i, paddingPerIteration++);
    }
    paddingPerIteration--;
    for (int i = 1; i < ((2 * numberOfAsteriks)); i += 2) {
        printAsteriks(i, paddingPerIteration--);
    }

    return 1;
}