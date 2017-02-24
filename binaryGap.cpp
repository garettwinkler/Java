// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    
    int max, currentGap;
    max, currentGap = 0;
    
    //parse trailing 0's
    while (N % 2 == 0) {
        N /= 2;   
    }
    
    while (N > 0) {
        if (N % 2 == 0) {
            currentGap ++;   
        }
        else {
            if (currentGap > max) {
                max = currentGap;
            }
            currentGap = 0;
        }
        N /= 2;
    }
    
    return max;
}
