
import java.util.*;

class Solution {
   public int solution(int N) {

      if (N == 1) return 1;
      if (N == 2) return 2;
   
      int factors = 0;
      //System.out.println("root: " + Math.sqrt(N));
      int rootCeil = (int)Math.ceil(Math.sqrt(N));
      //System.out.println("root ceil of " + N + ": " + rootCeil);      
      for (int i = 1; i <= rootCeil; i++) {
         if (N % i == 0) {
            factors += 2;
         }
      }

      double root = Math.sqrt(N);
      if (Math.pow(root,2) == Math.pow(rootCeil,2)) { //checks if N is perfect square
         return factors - 1;
      }
      else if (N % rootCeil == 0) {    //bad ceiling, fixes extra count ex 6, 42, etc
         return factors - 2;
      }
      else return factors; 
   }
    

   public static void main(String[] args) {

      //test cases      
      Solution sol = new Solution();
      System.out.println(sol.solution(12));
      System.out.println(sol.solution(24));
      System.out.println(sol.solution(120));
      System.out.println(sol.solution(25));     
      System.out.println(sol.solution(2));
      System.out.println(sol.solution(6));      
      System.out.println(sol.solution(41));
      System.out.println(sol.solution(42));            
        

   
   }
}