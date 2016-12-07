import java.util.*;

class Solution {
   public int solution (int A[]) {
      

      Arrays.sort(A);
      //System.out.println(Arrays.toString(A));
      
      if (A.length == 0) {
         return 1;
      }
      
      for (int i = 0; i < A.length; i++) {
         if (A[i] != i+1) {
            return i+1;
         }
      }
      

      return A.length+1;
   }


   public static void main (String[] args) {
      Solution sol = new Solution();

      int[] A = {2,3,1,5,4};
      System.out.println(sol.solution(A));
      


      
   }

}