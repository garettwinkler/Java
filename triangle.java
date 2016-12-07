// triangle
//codility 7


import java.util.*;

class Solution {
   public int solution (int[] A) {
      int isTriangle = 0;
      double[] B = new double[A.length];

      for(int i=0; i<A.length; i++) {
          B[i] = A[i];
      }

      Arrays.sort(B);
      System.out.println(Arrays.toString(A));
      for (int i = 0; i < B.length - 2; i++) {
         if (B[i] + B[i+1] > B[i+2] && B[i] + B[i+2] > B[i+1] && B[i+1] + B[i+2] > B[i]) {
            isTriangle = 1;
         }
      }
   
      return isTriangle;
   }

   public static void main(String[] args) {
      Solution sol = new Solution();
      int[] A = {10, 2, 5, 1, 8, 20};
      int[] B = {10, 50, 5, 1};
      int[] C = {1, 1, 1};
      int[] D = {2147483647, 2147483647, 2147483647};

      
      int result = sol.solution(A);
      System.out.println(result);
      result = sol.solution(B);
      System.out.println(result);      
      result = sol.solution(C);
      System.out.println(result);            
      result = sol.solution(D);
      System.out.println(result);                  
      
   }
   
}