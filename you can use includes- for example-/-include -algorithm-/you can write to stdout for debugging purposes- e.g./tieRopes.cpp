// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int K, vector<int> &A) {
    int ropes = 0;
    int currentLength = 0;
    for (unsigned int i = 0; i < A.size(); i++) {
        currentLength += A[i];
        if (currentLength >= K) {
            ropes++;
            currentLength = 0;
        }    
        
    }
    
    return ropes;
    
}
