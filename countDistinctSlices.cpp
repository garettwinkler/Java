// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;



int solution(int M, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int count = 0;
    
    if (A.size() == 0) {
        return 0;   
    }
    
    count++;        //(0,0) always works
    int front = 0;
    int back = 0;
    int currentElem = A[0];
    int index = 1;
    for (unsigned int i = 1; i < A.size(); i++) {
        currentElem = A[i];
        if (front == back) {cout << "here" << endl;}        
        front = i;
        int compareCount = 0;
        for (int j = back; j < front; j++) {
            cout << "Comparing " << currentElem << " to " << A[j] << endl;    
            if (currentElem == A[j]) {
                compareCount++;   
            }
        }
        if (compareCount == 0) {
            cout << "Distinct slice here" << endl;            
            count++;
        }
        else {
            cout << "Failed slice here" << endl;
            front = index;
            back = index;
            i = index;
            index++;
        }
    }
    return count;
}
