package Solution;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        List<String> list=new ArrayList<>();
        while (n-- != 0) {
            String str=sc.nextLine();
            list.add(6+str.substring(str.length()-5));
        }
        sc.close();
        for(String str:list){
            System.out.println(str);
        }
    }
}