import java.util.*;

class Solution {
   public int solution(int[] A) {
      
      int[] B = new int[A.length];
      System.out.println(Arrays.toString(A));
            
      B[0] = A[0];
      
      for (int i = 1; i < A.length; i++) {
         B[i] = B[i-1] + A[i];
      }

      System.out.println(Arrays.toString(B));      
      
      int value;
      for (int j = 0; j < B.length; j++) { 
         value = B[j];
         B[j] = Math.abs( (B[B.length-1] - value) - value);
      }
      
      System.out.println(Arrays.toString(B));      
      
      B[B.length-1] = 100000000; //inelegant hack (case where last element is 0)
      Arrays.sort(B);
      
      
      System.out.println(Arrays.toString(B));            
      
      return B[0];
   
  
   }


   public static void main(String[] args) {
      
      int[] A = {3,1,2,4,3};
            
      Solution sol = new Solution();
      sol.solution(A);                                     
    
   } 

}