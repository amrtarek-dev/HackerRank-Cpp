#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    int my_i;
    double my_d;
    string my_s;
    
    cin >> my_i;
    cin >> my_d;
    cin.ignore();
    getline(cin, my_s);
    
    cout << i + my_i << endl;
    cout << std::fixed << std::setprecision(1) << (d + my_d) << endl;
    cout << s + my_s << endl;

    return 0;
}