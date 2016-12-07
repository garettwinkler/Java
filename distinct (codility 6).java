// you can also use imports, for example:
import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(int[] A) {
        // write your code in Java SE 8
        
        Arrays.sort(A);
        
        if (A.length == 0) return 0;
        
        int i = 0;
        int distinct = A[i];
        int num = 1;
        i++;
        while (i < A.length) {
            if (A[i] != distinct) {
                num++;
                distinct = A[i];
            }
                
            i++;
        }
        return num;
    }
}