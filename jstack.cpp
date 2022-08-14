// create a function that takes in a stack of integers and return the mean

#include <iostream>
#include <stack>
using namespace std;

int stackAvg(stack<int>& s)
{
    if(s.size() == 0){
        return 0;
    }
    
    int start = 0;
    int HATE = s.size(); 

    while(!s.empty()){
        start += s.top();
        s.pop();
    }

    int mean = start/HATE;

    return mean;
}

int main(){
    
    stack<int> s;
    
    cout << stackAvg(s) << endl;

    return EXIT_SUCCESS;
}