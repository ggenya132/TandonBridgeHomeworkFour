#include <iostream>
#include <string>
#include <tuple>
#include <unordered_map>

using namespace std;

unordered_map<string, int> romanDecimalToValueMap = {
    {"M", 1000}, {"D", 500}, {"C", 100}, {"L", 50},
    {"X", 10},   {"V", 5},   {"I", 1}};

tuple<string, int> applyRomanDecimal(string denomination, int decimalValue) {
    int result = decimalValue;
    int denominationValue = romanDecimalToValueMap[denomination];
    int divisionResult = result / denominationValue;

    result -= (denominationValue * divisionResult);
    string resultString = "";

    return make_tuple(string(divisionResult, denomination[0]), result);
}
int main() {
    bool isValidInput = false;
    int decimalNumber;

    while (!isValidInput) {
        cout << "Please enter a decimal number: ";
        cin >> decimalNumber;
        if (decimalNumber <= 0) {
            cout << "Please enter a positive integer" << endl;
        } else {
            isValidInput = true;
        }
    }

    string denominations[7] = {"M", "D", "C", "L", "X", "V", "I"};

    string romanValueResult = "";
    int currentDecimalAmount = decimalNumber;

    // Could probably iterate over oredered map here (rather than unordered),
    // but prefer inuitiveness of ordered array
    for (string denomination : denominations) {
        tuple<string, int> result =
            applyRomanDecimal(denomination, currentDecimalAmount);
        currentDecimalAmount = get<1>(result);
        romanValueResult = romanValueResult + get<0>(result);
    }

    cout << decimalNumber << " is " << romanValueResult;

    return -1;
}