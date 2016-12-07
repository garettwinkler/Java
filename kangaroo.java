//kangaroo problem
//will they ever land in the same spot

import java.util.*;

class Kangaroo {

   //input respective positions and velocity of kangaroos
   public boolean solution(int pos1, int pos2, int vel1, int vel2) {
      boolean answer = false;
      if ( (pos1 < pos2 && vel1 <= vel2) || (pos2 < pos1 && vel2 <= vel1) ) {     //the kangaroo that starts behind is either slower or the same velocity = no/false
         answer = false;
      }
      else if (pos1 == pos2 && vel1 == vel2) {  //kangaroos are identical start and vel = yes/true
         answer = true;
      }
      else {
         int dist = Math.abs(pos2 - pos1);      //distance between starting positions
         int gain = Math.abs(vel2 - vel1);      //difference in velocity (distance gained each unit of time)
         
         if (dist % gain == 0 && dist != 0) {   //the distance between them is perfectly divisible by the difference in velocity = yes/true
            answer = true;
         }
      }
      
      return answer;
   
   }
   
   //some test cases
   public static void main(String[] args) {
      
      Kangaroo problem = new Kangaroo();
      System.out.println(problem.solution(1,1,1,1));           
      System.out.println(problem.solution(1,5,2,3));     
      System.out.println(problem.solution(1,1,3,2));
      System.out.println(problem.solution(5,25,10,5));      
   
   }


}