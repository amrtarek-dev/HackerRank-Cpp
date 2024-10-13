#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector<int>& elements): elements(elements){}
    
    void computeDifference(){
        maximumDifference = 0;
        if (elements.size() > 1){
            for(size_t i=0; i < elements.size(); ++i){
                for (size_t j=1; j < elements.size(); ++j) {
                    int diff = elements[i] - elements[j];
                    diff = diff < 0 ? diff * -1: diff;
                    maximumDifference = diff > maximumDifference ? diff : maximumDifference;
                }
            }           
        }
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}