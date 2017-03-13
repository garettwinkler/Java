// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

// we probably overdid this, ie there's a nicer way to do it but doesn't matter first try

#include <iostream>
#include <stack>

int solution(vector<int> &A, vector<int> &B) {
    int count = A.size();
    int size = A.size(); 
    stack<int> fishStack;
    stack<int> dirStack;
    
    fishStack.push(A[0]);
    dirStack.push(B[0]);
    
    for (int i = 1; i < size; i++) {
        int top = fishStack.top();
        int topDir = dirStack.top();
        if (B[i] == 0 && topDir == 1) {
            // upstream fish tries to eat all downstream fish
            while (!fishStack.empty() && topDir == 1 && A[i] > top) {      
                fishStack.pop();
                dirStack.pop();
                if (!fishStack.empty() ) {
                    top = fishStack.top();
                    topDir = dirStack.top();
                }
            }
            // The upstream fish ate everything or there is no more to meet, we push
            if (fishStack.empty() || topDir == 0) {
                fishStack.push(A[i]);
                dirStack.push(B[i]);
            }
            //else { the upstream fish got eaten, we don't push }

        }
        else {
            // new fish is going same direction as last/top fish or new fish is down and last fish was up
            // they will not run into each other, we push it
            fishStack.push(A[i]);
            dirStack.push(B[i]);
            
        }
    }
    
    count = fishStack.size();
    
    return count;
}
