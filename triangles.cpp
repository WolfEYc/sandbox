//create a function printTriangle which takes in an int n which is >= 0,
//and prints *'s with n rows
//and each rows length is the height of the row

//EX, printTriangle(5); ought to print out
/*

*
**
***
****
*****

printTriangle(0); prints nothing
printTriangle(1); prints

*

*/

#include <iostream>
using namespace std;

void printTriangle(unsigned int n){
    int i, j;
    for(i = 0; i < n; i++){ //for the height of the triangle
        for(j = 0; j <= i; j++){ //for the length of each row
            cout << "*";
        } 

        cout << endl;

    }
}

int main(){

    printTriangle(10);

    return EXIT_SUCCESS;
}