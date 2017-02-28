// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    int nonOverlapping = 0;
    int currentEnd = 0;
    
    if (A.size() == 1) return 1;
    
    for (unsigned int i = 0; i < A.size(); i++) {
        if (A[i] > currentEnd) {
            nonOverlapping++;
            currentEnd = B[i];
        }
        else {
            
        }
        
        
    }
    
    return nonOverlapping;
    
}
