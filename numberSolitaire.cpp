// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <algorithm>
int solution(vector<int> &A) {
    
    // cout << "A[]: ";
    // for (unsigned int k = 0; k < A.size(); k++) {
    //     cout << A[k] << " ";
    // }
    // cout << endl << endl;
    
    int N = A.size();
    vector<int> sixSided(6, A[0]); //creates vector with 6 elements and sets them all to A[0]
    
    for (int i = 1; i < N; i++) {
        //max element returns max in a given range
        int maxCurrentValue = *max_element(sixSided.begin(), sixSided.end()); //dereference b/c
        int roll = i % 6;
        //cout << *max_element(sixSided.begin(), sixSided.end()) + A[i] << endl;
        
        //setting the maxium value that can be achieved at this point (i.e at A[i])
        //store it at i%6
        sixSided[roll] = maxCurrentValue + A[i];
        
    }
    
    //cout << endl << "Answer: " << sixSided[(N-1) % 6] << endl;
    
    return sixSided[(N-1) % 6];
}
