import java.util.*;

class Solution {
   public int solution(int[] A) {
      if (A.length < 2) {
         return A[0];
      }
      
      Arrays.sort(A);
      
      int i = 0;
      int currentValue = A[i];
      i++;
      boolean odd = true;

      System.out.println(Arrays.toString(A));
      
      for (; i < A.length; i++) {
         if (A[i] != currentValue && odd == true) {
            return currentValue;
         }
         else if (A[i] != currentValue) {
            currentValue = A[i];
            odd = true;
         }
         else {
            odd = !odd;
         }
         
      }
   
   
      return currentValue;
   }


   public static void main(String[] args) {
      
      int[] A = {9,2,9,2,9,7,9};
      int[] B = {};
      int[] C = {9,2,9,2,9,7,9,7,9};
      int[] D = {9,2,9,2,9,7,9,7,9,9,10};
            
      Solution sol = new Solution();
      
      //System.out.println(Arrays.toString(A));                                  
      int oddManOut = sol.solution(A);
      System.out.println(oddManOut);


      oddManOut = sol.solution(C);
      System.out.println(oddManOut);
      
      oddManOut = sol.solution(D);
      System.out.println(oddManOut);      
      
//       Arrays.sort(A);
//       System.out.println(Arrays.toString(A));                                  
    
   } 

}