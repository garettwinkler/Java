// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

#include <algorithm>

int solution(vector<int> &A) {
    
    if (A.size() < 3) return 0;
    
    int numTri = 0;
    
    //sort(A.begin(), A.end());
    
    int first = A[0];
    int second = A[1];
    int third = A[2];
 
    for (unsigned int i = 0; i < A.size(); i++) {
        first = A[i];
        for (unsigned int j = i+1; j < A.size(); j++) {
            second = A[j];
            for (unsigned int k = j+1; k < A.size(); k++) {
                third = A[k];
                //cout << "Checking " << first << ", " << second << ", and " << third << endl;
                if (first + second > third &&
                    second + third > first &&
                    first + third > second)     {
                    
                    numTri++;
                    //cout << "the above is good" << endl;
                }
            }                 
        }            
    }
    

    
    return numTri;
}
