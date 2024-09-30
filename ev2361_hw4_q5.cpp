#include <iostream>
#include <string>
using namespace std;

const string ASTERIK = "*";
const string SPACE = " ";
void printAsteriks(int numberOfAsteriks, int paddingLeftRight){
    string result = "";
    for(int i =0; i < paddingLeftRight; i++){
        result += SPACE;
    }
    for(int i =0; i < numberOfAsteriks; i++){
        result += ASTERIK;
    }
     for(int i =0; i < paddingLeftRight; i++){
        result += SPACE;
    }
    cout<<result;
}
int main(){
    int numberOfAsteriks;
    cout<<"Enter positive integer:"<<endl;
    cin>>numberOfAsteriks;
    int paddingPerIteration = 0;

    for(int i = ((2 * numberOfAsteriks) -1); i > 0; i -= 2){
        printAsteriks(i, paddingPerIteration++);
        if(i != 0){
          cout<<endl;
        }
    }
    for(int i =1 ; i <= ((2 * numberOfAsteriks) -1); i += 2){
        printAsteriks(i, --paddingPerIteration);
        cout<<endl;
    }

    return 1;
}