#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double nPower(int integer, double degreeOfPower){
    return pow(integer, (1.0/degreeOfPower));
};


int main(){
    
    double lengthOfIterativeSequence; 
    double resultOfIterativeSequence = 1;

    cout<<"Please enter the length of the sequence: ";
    cin>>lengthOfIterativeSequence;
    cout<<"Please enter your sequence: "<<endl;

    double currentIntegerInSequence; 

    for(int i = 0 ; i < lengthOfIterativeSequence; i++){
        cin>>currentIntegerInSequence;
        resultOfIterativeSequence *= currentIntegerInSequence;
    }

    cout<<"The geometric mean is: "<<nPower(resultOfIterativeSequence, lengthOfIterativeSequence)<<endl;

    cout<<"Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1:"<<endl;


    int enteredNumber = 1;
    double numberOfDigitsEntered = 0;
    int result = 1;
    while(enteredNumber!= -1){
        cin>>enteredNumber;
        if(enteredNumber!=-1){
            result *= enteredNumber;
            numberOfDigitsEntered++;
        }
    }
    cout<<"The geometric mean is: "<<nPower(result, numberOfDigitsEntered)<<endl;
}