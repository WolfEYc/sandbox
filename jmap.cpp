/*create a function which takes in an 
* unordered_map<int, int> m; and 
* vector<int> k;
* of keys to this map.
* Return the max value mapped to any of key in the vector; 
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int returnMax(unordered_map<int, int>& m, vector<int>& k){
    //check if vector is empty
    if(k.size() == 0){
        return 0;
    }

    int maximum = 0;

    for(int i = 0; i < k.size(); i++){
         //check if k in m
        auto it = m.find(k[i]);
        //this rewrites this:   
        //std::unordered_map<std::string,double>::const_iterator got = mymap.find (input);

        if(it != m.end()){
            //did find m[k[i]]
            maximum = max(maximum, it->second);
        }
    }
    return maximum;
}

int main(){

    unordered_map<int, int> m;
    m[1] = 100;
    m[5] = 56;
    m[10] = 5;

    vector<int> k({7}); //inserting inside a vector

    cout << returnMax(m,k) << endl;
    

    return EXIT_SUCCESS;
}