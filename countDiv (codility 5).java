// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(int A, int B, int K) {
        // write your code in Java SE 8
        int a = B/K;
        int b = 0;
        if (A > 0) {
            b = (A-1)/K  ;     
            return a - b;
        }
    
        return a+1;
    }
}