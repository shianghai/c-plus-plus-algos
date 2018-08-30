#include <iostream>
using namespace std;
int main(){
int num;

while(num){
    cout << "Enter any number"<< endl;
    cin >> num;
    if (num){
        int x = 2;
        int state = 1;
        for (x; x<=(n/2); x++){
            if ((n % x) == 0){
                state = 0;
                break;
            }
         };
         if (state == 1){
             cout << "prime number = True\n" << endl;
         }
         else{
             cout << "prime number = False\n" << endl;
        }
    }
    else{
        cout << "Ended." << endl;
        break;
    }
}


return 0;
};

