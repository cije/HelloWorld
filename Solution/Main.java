package Solution;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        List<Integer> list = new ArrayList<>();
        for (int i = 2; i <= 10000; i++) {
            if (isPrime(i)) {
                list.add(i);
            }
        }
        Scanner sc = new Scanner(System.in);
        int n, count = 0, t = 0;
        while ((n = sc.nextInt()) != 0) {
            for (int tmp : list) {
                t = n - tmp;
                if (t <= 0) {
                    break;
                }
                if (list.contains(t)) {
                    count++;
                }
            }
            System.out.println(count);
        }
        sc.close();
    }

    static boolean isPrime(int n) {
        if (n == 2 || n == 3)
            return true;
        if (n % 6 != 1 && n % 6 != 5)
            return false;
        for (int i = 5; i <= Math.floor(Math.sqrt(n)); i += 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        return true;
    }
}