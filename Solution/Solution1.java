package Solution;

/*
 * @Author: c__e 
 * @Date: 2020-01-31 12:27:13 
 * @Last Modified by:   c__e 
 * @Last Modified time: 2020-01-31 12:27:13 
 */
import java.util.Scanner;

public class Solution1 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = Integer.parseInt(scanner.nextLine());
        while (n-- > 0) {
            cal(scanner.nextLine());
        }
        scanner.close();
    }

    static void cal(String password) {
        int a = 0, b = 0, c = 0, d = 0;
        char ch;
        boolean flag = true;
        if (password.length() < 8 || password.length() > 16) {
            flag = false;
        } else {
            for (int i = 0; i < password.length() && flag; i++) {
                ch = password.charAt(i);
                if (Character.isUpperCase(ch)) {
                    a = 1;
                } else if (Character.isLowerCase(ch)) {
                    b = 1;
                } else if (Character.isDigit(ch)) {
                    c = 1;
                } else if (ch == '~' || ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '%'
                        || ch == '^') {
                    d = 1;
                } else {
                    flag = false;
                }
                if (a + b + c + d >= 3) {
                    break;
                }
            }
            if (a + b + c + d < 3) {
                flag = false;
            }
        }
        if (flag) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}