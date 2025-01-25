import java.util.Scanner;
public class GstItems{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a pen price:");
        float pen =sc.nextFloat();
         System.out.println("enter a pencil price:");
        float pencil =sc.nextFloat();
         System.out.println("enter a eraser price:");
        float eraser =sc.nextFloat();
        float cost=pen+pencil+eraser;
        System.out.println(cost);
        float gst = cost+0.18f;
        float totalcost=cost+gst;
        System.out.println(totalcost);


    }
}