#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    auto sentence_count = 0;
    cin >> sentence_count; cin.ignore();
    vector<string> sentences{};
    vector<string> new_sentences{};
    for(auto i = 0; i < sentence_count; i++){
        string str;
        getline(cin,str);
        sentences.emplace_back(str);
        string even_str{}, odd_str{};
        for(auto count = 0; count < sentences[i].length(); count++){
            if(count % 2) even_str += sentences[i][count];
            else odd_str += sentences[i][count];
        }
        auto new_str = odd_str + " " + even_str;
        new_sentences.emplace_back(new_str);
    }
    for(size_t i = 0; i < sentence_count; i++){
        cout << new_sentences[i] << endl;
    }
    return 0;
}
