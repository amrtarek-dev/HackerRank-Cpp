#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int num){
     // only positive and not 1 and
     // execlude the even numbers.
   if (num == 2) return true;
   if (num <= 1 || num % 2 == 0) return false;
   
   // 3, 5, 7 = +2
   // check only the odd values
   // up to the square root of number
   int i = 3;
   int num_squrt = sqrt(num);
   while(i <= num_squrt){
       if (num % i == 0){
           return false;
       }
       i+=2;
   }
   return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    vector<int> input;
    int tmp;
    while(T > 0) {
        cin >> tmp;
        input.push_back(tmp);
        --T;
    }
    for(auto num: input){
        if (isPrime(num)) {
            cout << "Prime" << endl;
        }else{
            cout << "Not prime" << endl;
        }
    }
    return 0;
}
