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
    vector <int>::iterator iter = sliceVector.begin();
    
    for (unsigned int i = 0; i < A.size(); i++) {
        currentElem = A[i];        
        //cout << "Checking for " << currentElem << endl;
        iter = find(sliceVector.begin(), sliceVector.end(), currentElem);
        
        if (iter == sliceVector.end()) {
            //cout << "Distinct slice found" << endl;
            distinctCount++;
            sliceVector.push_back(currentElem);            
            if (i == A.size() - 1) {    // Occurs if we hit the end of array while on a good slice. Reset to index
                sliceVector.clear();
                index++;
                i = index-1;                   
            }            
        }
        else {
            //cout << "Failed slice here" << endl;
            sliceVector.clear();
            index++;
            i = index - 1;
        }    

        // for(unsigned int k = 0; k < sliceVector.size(); k++){
        //   cout << sliceVector[k] << " ";
        // }        
        // cout << endl;
        
    }
    
    return distinctCount; 
}
