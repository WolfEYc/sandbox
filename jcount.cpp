#include <bits/stdc++.h>
using namespace std;

//given a list of strings, and a list of prefix strings
//print the frequency of each prefix in the list of strings

#include <iostream>
#include <vector>
using namespace std;

void printFrequeniesOfPrefixes(vector<string>& strings, vector<string>& prefixes){
    int i, j, x, counter;
    for(i = 0; i < prefixes.size(); i++){
        counter = 0;
        for(j = 0; j < strings.size(); j++){
            
            if(prefixes[i].size() > strings[j].size()){
                continue;
            }

            for(x = 0; x < prefixes[i].size(); x++){
                if(prefixes[i][x] != strings[j][x]){
                    break;
                }
            }

            if(x == prefixes[i].size())
            {
                counter++;
            }

            //cout << prefixes[i] << " vs " << strings[j] << ": x == " << x << endl;

        }

        cout << prefixes[i] << "-> " << counter << endl;

    }
}

int main(){

    vector<string> s({"jadv", "cap", "ew", "booo", "booo", "doomah"});
    vector<string> p({"jad", "ca", "e", "bo"});

    printFrequeniesOfPrefixes(s,p);

    return EXIT_SUCCESS;
}