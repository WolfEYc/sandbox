//create a function void printFreq(vector<string>& strs)
//which print the frequency of each string in the vector (in any order)
//constraints: must use O(n) time complexity (because it does one pass)

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void printFreq(vector<string> strs){
    unordered_map<string, int> strsMap;

    for(int i = 0; i < strs.size(); i++){
       strsMap[strs[i]]++;
    }
    
    for(const auto& [str, frequency] : strsMap) //iterates over the key-value pairs in the map
    {
        cout << str << "-> " << frequency << endl;
    }
}


int main(){

    vector<string> k({"kansas", "kenya", "cap", "ew", "booo", "booo", "doomah"});

    printFreq(k);

    return EXIT_SUCCESS;
}
