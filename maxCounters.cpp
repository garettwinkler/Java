// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <limits>    


vector<int> solution(int N, vector<int> &A) {
    int size = A.size();
    vector<int> counters;
    counters.assign(N, 0);  //fill vector with N ints of value 0
    
    int currentMin = std::numeric_limits<int>::min();   //c++ equiv of Integer.MIN_VALUE
    int currentMax = 0;
    for (int i = 0; i < size; i++) {
        if (A[i] <= N) {
            if (counters[A[i]-1] < currentMin) {
                counters[A[i]-1] = currentMin;    
            }
            
            counters[A[i]-1]++;
            
            if (counters[A[i]-1] > currentMax) {
                currentMax = counters[A[i]-1];
            }
        }
        else {  
            currentMin = currentMax;
        }
    }
    
    
    for (int i = 0; i < N; i++) {
        if (counters[i] < currentMin) {
            counters[i] = currentMin;    
        }
    }
    
   return counters;
}
