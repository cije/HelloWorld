/*
 * @Author: c__e 
 * @Date: 2020-01-31 13:02:54 
 * @Last Modified by: c__e
 * @Last Modified time: 2020-01-31 13:23:37
 */
package Solution;

import java.math.BigDecimal;
import java.util.Scanner;

public class Main1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            BigDecimal a=sc.nextBigDecimal();
            BigDecimal b=sc.nextBigDecimal();
            if (a.compareTo(b)==0) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}