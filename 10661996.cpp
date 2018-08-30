#include <iostream>
using namespace std;
int main(){
int number;
cout
 << "################################################################" << endl
 << "######################## Welcome ############################" << endl
 << "################## PRIME NUMBER CHECKER. #####################" << endl
 << "######## to QUIT the program enter any non_numeric key #########" << endl
 << "################################################################\n" << endl;

while(number){
    cout << "Enter any number"<< endl;
    cin >> number;
    if (!cin.fail()){
        prime_numberChecker(number);
    }
    else{
        cout << "Program Exited, GOODBYE." << endl;
        break;
    }
}


return 0;
};
//function to check prime number
int prime_numChecker(int n){
    int x = 2;
    bool prime = true;
    for (x; x<=(n/2); x++){
        if ((n % x) == 0){
            prime = false;
            break;
        }
    };
    if (prime == true){
        cout << "status = True \nResult: That's a prime number\n" << endl;
    }
    else{
        cout << "status = False \nnumber is divisible by "<< x <<"\nResult: Not a prime number\n" << endl;
    }
};
