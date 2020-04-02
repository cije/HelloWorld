package Solution;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str;
        List<Integer> list = new ArrayList<>();
        while (!(str = sc.nextLine()).equals("#")) {
            HashSet<String> hashSet = new HashSet<>();
            StringTokenizer stk = new StringTokenizer(str, " ");
            while (stk.hasMoreTokens()) {
                hashSet.add(stk.nextToken());
            }
            list.add(hashSet.size());
        }
        sc.close();
        for (int num : list) {
            System.out.println(num);
        }
    }
}