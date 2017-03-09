// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <cmath>
#include <algorithm>

vector<int> fib;

//store a fib seq up to the highest term we'll need 
//then we'll be able to access it at O(1) each time
void fillFib(int max) {
    fib.assign(max+1,0);
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < max+1; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
}

vector<int> solution(vector<int> &A, vector<int> &B) {
    vector<int> climbing;
    int size = A.size();
    int maxRungs = *(max_element(A.begin(), A.end())); //getting largest number in A (ie max rungs)
    fillFib(maxRungs);  //creates vector of all fib terms that we'll need
    for (int i = 0; i < size; i++) {
        int rungs = A[i];
        unsigned long long ways = fib[rungs];
        int power = B[i];
        int modNum = pow(2.0, power);
        climbing.push_back(ways % modNum);
    }
 
    return climbing;
}
