// create a function fivenum(vector<int> nums),
// which prints the five number summary of nums
// print your own error if not possible (not enough numbers or something)
// nums may not be sorted (do it yourself, use std::sort !!!)

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void fivenum(vector<int> nums){
    //five num summary - Min, Q1, Median, Q3, Max
    
    if(nums.size() == 0){
        cout << "Missing Data" << endl;
        return;
        //once you return -> nothing is executed afterwards inside this function 
    }
    
    sort(nums.begin(), nums.end());

    int maximum = nums[nums.size() - 1];
    int minimum = nums[0];
    int half = nums.size() / 2;
    float median;
    float quartile1;
    float quartile3;
    
    if(nums.size() % 2){ //accounts for the old sized vectors
        median = nums[half];
        quartile1 = nums[half * .5];
        quartile3 = nums[half * 1.5];
    } else {
        median = (nums[half] + nums[half - 1]) / 2.f;  //accounts for the even sized vectors
        quartile1 = (nums[half * .5] + nums[half * .5 - 1]) / 2.f;
        quartile3 = (nums[half * 1.5] + nums[half * 1.5 - 1]) / 2.f;
    }   

/*
    int median = nums.size() % 2 ? nums[half] : (nums[half] + nums[half - 1]) / 2;
    //is it odd ? yes -> givide by half : no -> get the 2 indexes in the middle and divide by 2 
    
*/

    cout << minimum << ", " << quartile1 << ", " << median << ", " << quartile3 << ", " << maximum << endl;
}

int main(){

    vector<int> k({7,9,0,0});

    fivenum(k);

    return EXIT_SUCCESS;
}