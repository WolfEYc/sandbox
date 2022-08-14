#include <iostream>
#include <queue>
using namespace std;

int main(){

    srand(time(NULL));

    int num = rand() % 100 + 101;
    int num2;

    queue<int> q;

    for(int i = 0; i < num; i++){
        num2 = rand() % 50 + 1;
        q.push(num2);
    }

    int addy = 0;

    while(!q.empty()){
        addy += q.front();
        q.pop();
    }

    cout << addy << endl;

    return EXIT_SUCCESS;
}

//push from 100-200 inclusive random integers into a queue
//the integers value must be from 1 - 50 inclusive
//then print the sum of the integers in the queue