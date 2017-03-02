// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

#include <algorithm>

int solution(vector<int> &A) {
    int size = A.size();
    if (size < 3) return 0;
    
    int numTri = 0;
    
    sort(A.begin(), A.end());
    
    // int first = A[0];
    // int second = A[1];
    // int third = A[2];
 
    for (int i = 0; i < size; i++) {
        int k = i + 1;
        for (int j = i + 1; j < size; j++) {
            while (k < size && A[i] + A[j] > A[k]) {
                k++;   
            }
            numTri += k - j - 1;
        }
           
    }
    

    
    return numTri;
}
