// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    int maximum = A[0];
    int size = A.size();
    vector<int> B;  //to hold slices. Holds max slice possible at index
    B.assign(size, 0);  //fill with 0s so we can use [] notation instead of push_back
    
    for(int i = 0; i < size; i++) {
        if (i == 0) {
            B[i] = A[i];   
        }
        else {
            int slice = max(A[i], A[i] + B[i-1]);
            B[i] = slice;
        }
        maximum  = max(B[i], maximum);
    }
    return maximum;
}
