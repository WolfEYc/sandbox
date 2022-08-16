// create a function vector<string> filterWithPrefix(vector<string>& strings, string prefix)
// that returns the strings that start with the given prefix

#include <iostream>
#include <vector>
using namespace std;

vector<string> filterWithPrefix(vector<string>& strings, string& prefix){
    vector<string> newVector;

    for(int i = 0; i < strings.size(); i++){
        if(strings[i].size() < prefix.size()){ 
            continue;
        }

        //strings[i].size() >= prefix.size() at this point
        /*
        for(j = 0; j < prefix.size(); j++){
            if(strings[i][j] != prefix[j]){
                break;
            }
        }
        
        if(j == prefix.size()){
            newVector.push_back(strings[i]);
        }*/
        
        
        if(prefix == strings[i].substr(0, prefix.size())){ // :(( 
            newVector.push_back(strings[i]);
        }
    }

    return newVector;
}


int main(){

    string prefix = "ca";
    vector<string> k({"cat", "cool", "cap", "isaac", "booo", "ca", "c"});

    vector<string> result = filterWithPrefix(k, prefix);

    for(string& s : result) //"for each" string in result, do loop
    {
        cout << s << endl;
    }

    return EXIT_SUCCESS;
}

 