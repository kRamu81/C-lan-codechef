import java.util.Scanner;
public class Square{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a value:");
        int A =sc.nextInt();
        int s=A*A;
        System.out.println(s);
        sc.close();
    }
}