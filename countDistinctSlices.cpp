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
    
    int front = 0;
    int back = 0;
    int currentElem = A[0];
    int index = 0;
    
    for (unsigned int i = 0; i < A.size(); i++) {
        currentElem = A[i];
        int compareCount = 0;

        for (int j = back; j <= front; j++) {
            cout << "Comparing " << currentElem << " to " << A[j] << endl;                
            if (currentElem == A[j]) {
                compareCount++;   
            }
        }
        
        if (compareCount == 1) {
            cout << "Distinct slice here" << endl;        
            count++;
            front++;

        }
        else {
            cout << "Failed slice here" << endl;
            index++;
            front = index;
            back = index;
            i = index-1;
        }

    }
    return count;
}
