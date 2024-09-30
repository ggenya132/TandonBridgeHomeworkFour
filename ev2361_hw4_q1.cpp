#include <iostream>
using namespace std;

int main(){
    int enteredRange;
    cout<<"Please enter a positive integer: ";
    cin>>enteredRange;
    cout<<endl;

    cout<<"While loop iteration"<<endl;

    int currentCount = 0;
    while(currentCount <= enteredRange){
        cout<<currentCount++<<endl;
    }

    cout<<"For loop iteration"<<endl;
    
    for(int currentCount = 0; currentCount <= enteredRange; currentCount++){
        cout<<currentCount<<endl;
    }
    return 0;
}