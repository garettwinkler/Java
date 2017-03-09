// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <cmath>

//getFibNum returns the number of different ways of climbing a ladder
//just happens to be the fib seq.
int getFibNum(int x) {
    unsigned long long a = 0;
    unsigned long long b = 1;
    unsigned long long fib = 1;
    for (int i = 0; i < x; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

vector<int> solution(vector<int> &A, vector<int> &B) {
    vector<int> climbing;
    int size = A.size();
    for (int i = 0; i < size; i++) {
        //cout << "A[i]: " << A[i] << " ";
        //cout << "B[i]: " << B[i] << endl;
        int rungs = A[i];
        unsigned long long ways = getFibNum(rungs);
        //cout << "fibNum: " << ways << endl;
        int power = B[i];
        int modNum = pow(2.0, power);
        //cout << "Result pushed: " << ways % modNum << endl << endl;
        climbing.push_back(ways % modNum);
    }
 
    return climbing;
}
