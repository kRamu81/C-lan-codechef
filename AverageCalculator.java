import java.util.Scanner;
public class AverageCalculator{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the values of(A,B,C):");
        int A=sc.nextInt();
        int B=sc.nextInt();
        int C=sc.nextInt();
        int Avg=(A+B+C)/3;
        System.out.println(Avg);
    }
}