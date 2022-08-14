// create a function which takes in a vector<int> nums,
// and returns the sum of the elements at even indexes
// return 0 if there are no elements at even indexes

#include <iostream>
#include <vector>
using namespace std;

int sumEven(vector<int>& nums){
    if(nums.size() == 0){
        return 0;
    }

    int sum = 0;

    for(int i = 0; i < nums.size(); i++){
        //check if index is even and sums it up
        sum += !(i % 2) * nums[i];
    }

    return sum;
}


int main(){

    vector<int> nums({7,8,6,4,1,6,78});


    cout << sumEven(nums) << endl;

    return EXIT_SUCCESS;
}