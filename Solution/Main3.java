package Solution;

import java.util.Scanner;

/**
 * Main
 */
public class Main3 {
    public static void main(String[] args) {
        // List<String> list = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        StringBuilder stb = new StringBuilder();
        while ((n--) > 0) {
            int a = 0, e = 0, i = 0, o = 0, u = 0;
            String str = sc.nextLine();
            for (int j = 0; j < str.length(); j++) {
                char ch = str.charAt(j);
                if (ch == 'a') {
                    a++;
                } else if (ch == 'e') {
                    e++;
                } else if (ch == 'i') {
                    i++;
                } else if (ch == 'o') {
                    o++;
                } else if (ch == 'u') {
                    u++;
                }
            }
            stb.append("a:" + a + "\ne:" + e + "\ni:" + i + "\no:" + o + "\nu:" + u+"\n");
            if (n != 0) {
                stb.append("\n");
            }
        }
        System.out.println(stb.toString());
        sc.close();
    }
}