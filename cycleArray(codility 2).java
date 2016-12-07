import java.util.*;

class Solution {
    public int[] solution(int[] A, int K) {
        // write your code in Java SE 8
        
        int temp = 0;
        int i;
        if (A.length == 0) {
            return A;
        }
        
        for (int j = 0; j < K; j++) {
            i = A.length-1;
            temp = A[i];
            for (; i >= 0; i--) {
                if (i > 0) {
                  A[i] = A[i-1];
                }
                else {
                  A[i] = temp;
                }
                //System.out.println(Arrays.toString(A));                
            }
            //System.out.println(Arrays.toString(A));                            
        }
        return A;
        
    }
    
    
   public static void main(String[] args) {
      
      int[] A = {3, 8, 9, 7, 6};
      int[] B = {};      
      
      Solution sol = new Solution();
      
      System.out.println(Arrays.toString(A));                                  
      sol.solution(A, 3);


      System.out.println(Arrays.toString(B));                                  
      sol.solution(B, 3);      
   }    
}

