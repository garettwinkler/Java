// HackerRank
// Algorithms/Implementation
// Utopian Tree
// 20 points easy

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        int height;
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            height = 1;
            for (int i = 1; i <= n; i++) {
                if (i % 2 != 0) {
                    height = height * 2;
                }
                else {
                    height = height + 1;
                }
            }
            System.out.println(height);
        }
    }
}
