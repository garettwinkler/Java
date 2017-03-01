// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A, vector<int> &B) {
    // A = list of starts
    // B = list of ends
    
    if (A.size() == 0) return 0;
    if (A.size() == 1) return 1;    
    
    int nonOverlapping = 1;

    int rightIndex = A.size()-1;
    int leftIndex = A.size()-2;
    while (leftIndex >= 0) {
        if (B[leftIndex] < A[rightIndex]) {
            rightIndex = leftIndex;
            nonOverlapping++;
        }
        else if (A[rightIndex] <= A[leftIndex]) {
            rightIndex = leftIndex;
        }
        leftIndex--;
        
    }

    
    return nonOverlapping;
    
}
