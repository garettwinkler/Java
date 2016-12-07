
import java.util.*;

class Solution {
   public int solution(int N) {
  
      String binString = Integer.toBinaryString(N);
      System.out.println(N + " is " + binString);
   
      int count = 0;
      int maxGap = 0;
      
      if (N > 0) {
         int i = binString.length() - 1;
         while (binString.charAt(i) == '0') {
            i--;  //parse through trailing 0s
         }
         i--;  //parse far right 1
         for (; i>=0; i--) {
            if (binString.charAt(i) == '0') {
               count++;
            }
            else {
               if (count > maxGap) {
                  maxGap = count;
               }
               count = 0;
            }
         }
      }         
      return maxGap;
   }
    
    
   public static void main(String[] args) {
      
      Solution sol = new Solution();
      int binaryGap;
      
      //test cases
      
      binaryGap = sol.solution(1041);
      System.out.println("Max binary gap: " + binaryGap + "\n");

      binaryGap = sol.solution(45);
      System.out.println("Max binary gap: " + binaryGap + "\n");

      binaryGap = sol.solution(145);
      System.out.println("Max binary gap: " + binaryGap + "\n");
   
      binaryGap = sol.solution(137);
      System.out.println("Max binary gap: " + binaryGap + "\n");   
      
      binaryGap = sol.solution(34856);
      System.out.println("Max binary gap: " + binaryGap + "\n");         
      
      binaryGap = sol.solution(16);
      System.out.println("Max binary gap: " + binaryGap + "\n");               
      
      binaryGap = sol.solution(51712);
      System.out.println("Max binary gap: " + binaryGap + "\n");                     
   }
}

