// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;



int solution(int M, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int distinctCount = 0;
    
    if (A.size() == 0) {
        return 0;   
    }
    
    unsigned int front = 0;
    int back = 0;
    bool inSlice[M + 1] = {false};
    //bool *inSlice = new bool[M+1];
    
    for (; front < A.size(); front++) {
        while ( inSlice[A[front]] ) {
            inSlice[A[back]] = false;
            back++;
        }
        
        inSlice[A[front]] = true;
        distinctCount += (front+1) - back;
        if (distinctCount >= 1000000000) return 1000000000;
            
    }
    
    return distinctCount; 
}
