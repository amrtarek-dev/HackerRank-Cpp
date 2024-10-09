#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int dict_size = 0;
    cin >> dict_size; cin.ignore();
    map<string, long int> dict;
    for (size_t i = 0; i < dict_size ; i++){
        string name{};
        long int number{};
        cin >> name >> number;
        dict[name] = number;
    }
    cin.ignore();
    string query{};
    while(getline(cin, query)){
        auto it = dict.find(query);
        if (it != dict.end()){
            cout << it->first << "=" << it->second << endl;
        }else{
            cout << "Not found" << endl;
        }
    }
    return 0;
}
