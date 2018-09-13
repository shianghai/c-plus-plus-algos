
#include <iostream>
#include <cstring>
using namespace std;


int process(int n1, int n2){
    if (n2 != 0)
        return process(n2, n1 % n2);
    else
        return n1;
}

int main(){
    cout
     << "####################### H.C.F FINDER.. #########################" << endl
     << "################################################################\n\n" << endl;

    while (true){
        int i, j;
        cout << "Enter the two numbers :\n>";
        cin>>i;
        cout<<">";
        cin>>j;
        if (!cin.fail()){
            cout << "The H.C.F of " << i << " and " <<  j << " is: " << process(i, j) << "\n\n";
            continue;
        }
        else{
            cout << "\n\nProgram Exited, GOODBYE." << endl;
            break;
        }

        return 0;
    }


}
