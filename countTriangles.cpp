// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

#include <algorithm>

int solution(vector<int> &A) {
    
    if (A.size() < 3) return 0;
    
    int numTri = 0;
    
    sort(A.begin(), A.end());
    
    int first = A[0];
    int second = A[1];
    int third = A[2];
 
    for (unsigned int i = 0; i < A.size()-1; i++) {
        first = A[i];
        second = A[i+1];
        
        for (unsigned int j = i+2; j < A.size(); j++) {
            third = A[j];
            //cout << "Checking: " << first << ", " << second << ", and " << third << endl;
            if (first+second > third && second + third > first && first + third > second) {
                numTri++;   
                //cout << "the above worked ^" << endl;
            }
            
        }
        if (i == A.size()-2) {
            for (unsigned int k = 0; k < i-1; k++) {
                third = A[k];
                //cout << "Checking: " << first << ", " << second << ", and " << third << endl;
                if (first+second > third && second + third > first && first + third > second) {
                    numTri++;   
                    //cout << "the above worked ^" << endl;
                }                
            }
        }
        
    }
    
    // sort(A.begin(), A.end());

    // for (unsigned int i = 0; i < A.size(); i++) {
    //     cout << A[i] << " ";
    // }
    // cout << endl;
    
    return numTri;
}
