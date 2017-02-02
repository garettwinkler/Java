import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            int k = in.nextInt();
            int a[] = new int[n];
            for(int a_i=0; a_i < n; a_i++){
                a[a_i] = in.nextInt();
            }
            Arrays.sort(a);
            int count = 0;
            int j = 0;
            while (j < a.length && a[j] <= 0) {
                count++;
                j++;
            }
            if (count >= k) {
                System.out.println("NO");
            }
            else System.out.println("YES");
        }
    }
}
