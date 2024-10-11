#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int main()
{

    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }
    
    int max_hourglass = -100, sum_hourglass =0;
    int top_hourglass = 0, mid_hourglass = 0, bot_hourglass = 0;
    
    for (size_t y = 0; y < 4; ++y){
        for(size_t t = 0, m = 1, b = 0; t < 4; ++t, ++m, ++b){
            top_hourglass = arr[y][t] + arr[y][t+1] + arr[y][t+2];
            mid_hourglass = arr[y+1][m];
            bot_hourglass = arr[y+2][t] + arr[y+2][t+1] + arr[y+2][t+2];
            sum_hourglass = top_hourglass + mid_hourglass + bot_hourglass;
            max_hourglass = sum_hourglass > max_hourglass? sum_hourglass : max_hourglass;
        }
    }
    cout << max_hourglass << endl;
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
