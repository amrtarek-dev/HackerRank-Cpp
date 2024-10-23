#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int returnDay{}, returnMonth{}, returnYear{},
        dueDay{}, dueMonth{}, dueYear{};
        
        cin >> returnDay >> returnMonth >> returnYear;
        cin >> dueDay >> dueMonth >> dueYear;
        
        int fine = 0;
        if (returnYear > dueYear){
            fine = 10000;
        }else if (returnYear == dueYear){
            if(returnMonth > dueMonth){
                fine = 500 * (returnMonth - dueMonth);
            }else if(returnMonth == dueMonth){
                if(returnDay > dueDay) {
                    fine = 15 * (returnDay - dueDay);
                }
            }
        }
    
        cout << fine << endl;
    return 0;
}
