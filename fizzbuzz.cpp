
//if it is divisible by 3 print fizz
//if it is divisible by 5 print buzz
//otherwise print the number
//print a newline after each.

#include <iostream>
using namespace std;

void fizzbuzz(unsigned int n){
    if(n % 3 == 0){
        cout << "fizz";
    }

    if(n % 5 == 0){
        cout << "buzz";
    }

    if(n % 3 != 0 && n % 5 != 0){
        cout << n;
    }


    cout << endl;
}

int main(){  

    unsigned int num = 12;

    fizzbuzz(28);

    return EXIT_SUCCESS;

}