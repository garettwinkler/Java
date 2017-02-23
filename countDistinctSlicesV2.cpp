// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <iostream>     // std::cout
#include <algorithm>    // std::count
#include <vector>       // std::vector

int solution(int M, vector<int> &A) {

    int distinctCount = 0;
    
    if (A.size() == 0) {
        return 0;   
    }
    
    int currentElem = A[0];
    int index = 0;  //index tracks where the back should be. Index must hit all indices.
    
    vector<int> sliceVector;    //contains current range/slice
    
    for (unsigned int i = 0; i < A.size(); i++) {
        currentElem = A[i];
        int compareCount = 0;
        sliceVector.push_back(currentElem);
        compareCount = count(sliceVector.begin(), sliceVector.end(), currentElem);
        
        if (compareCount == 1) {
            distinctCount++;
            if (i == A.size() - 1) {    // Occurs if we hit the end of array while on a good slice. Reset to index
                sliceVector.clear();
                index++;
                i = index-1;                   
            }            
        }
        else {
            sliceVector.clear();
            index++;
            i = index - 1;
        }    
    }
    
    return distinctCount; 
}
