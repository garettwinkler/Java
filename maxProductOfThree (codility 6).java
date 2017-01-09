
import java.util.*;

class Solution {

   public int solution(int[] A) {
      
      if (A.length == 3) return A[A.length - 1] * A[A.length - 2] * A[A.length - 3];    //only 3 elements
      
      int numNegat = 0;
      int[] absVal = new int[A.length];
      System.out.println("Original: " + Arrays.toString(A));
      Arrays.sort(A);
      for (int i = 0; i < A.length; i++) {
         if (A[i] < 0) {
            absVal[i] = Math.abs(A[i]);
            numNegat++;
         }
         else {
            absVal[i] = A[i];
         }
      }
      Arrays.sort(absVal);
      System.out.println("Sorted: " + Arrays.toString(A));
      System.out.println("absVal: " + Arrays.toString(absVal));

      if (numNegat <= 1) return A[A.length - 1] * A[A.length - 2] * A[A.length - 3];           //only 1 negative
      if (numNegat == A.length) return A[A.length - 1] * A[A.length - 2] * A[A.length - 3];    //all negative

      //iterative 
      int first;
      int second;
      int third;
      
      if (Math.abs(A[0]) > A[A.length-1]) {
         first = A[0];
         if (Math.abs(A[1]) > A[A.length-1]) {
            second = A[1];
            third = A[A.length-1];
            return first*second*third;    //two highest are negatives
         }
         else {
            second = A[A.length-1];
            third = A[1];
            return first*second*third;    //first and third are negatives         
         }
      }
      else {
         first = A[A.length-1];
         if (Math.abs(A[0]) >= A[A.length-2] && Math.abs(A[1]) >= A[A.length-3]) {
            second = A[0];
            third = A[1];
            return first*second*third;    //second and third are negatives
         }
      }
      
      return A[A.length - 1] * A[A.length - 2] * A[A.length - 3]; 
   }
   
   
      
   
   public static void main(String[] args) {

      Solution sol = new Solution();
      
      int[] A = {-3,1,2,-2,5,6};       
      int[] B = {-3,-2,-1};            //only 3
      int[] BB = {-3,-2,-1,1};         //first and second are neg
      int[] C = {-100,-2,1,2,3,4};     //first and third are neg
      int[] D = {-5,-5,1,2,3,4,200};   //second and third are neg
      int[] E = {2, 100, 3, -1000};    //only 1 neg
      int[] F = {-5, -6, -4, -7, -10}; //all neg
      int[] G = {4, 7, 3, 2, 1, -3, -5};  //second and third are neg
            
      int answer = sol.solution(A);  
      System.out.println(answer);
      
      answer = sol.solution(B);
      System.out.println(answer);

      answer = sol.solution(BB);
      System.out.println(answer);
      
      answer = sol.solution(C);
      System.out.println(answer);   
      
      answer = sol.solution(D);
      System.out.println(answer);      
      
      answer = sol.solution(E);
      System.out.println(answer);            
      
      answer = sol.solution(F);
      System.out.println(answer);                  

      answer = sol.solution(G);
      System.out.println(answer);                  
      
   }


}