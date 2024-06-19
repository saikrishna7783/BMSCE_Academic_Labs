import java.util.Scanner;

class QuadraticEqn {
    public static void main(String args[]) {
        System.out.print("Enter the co-efficients of quadratic equation : ");
        Scanner input = new Scanner(System.in);
        double a = input.nextDouble();
        double b = input.nextDouble();
        double c = input.nextDouble();
        if(a==0{
            System.out.print("Enter valid inputs!");
            System.exit(0);
        }
        double d = b * b - 4.0 * a * c;
        if (d > 0.0) {
            double r1 = (-b + Math.pow(d, 0.5)) / (2.0 * a);
            double r2 = (-b - Math.pow(d, 0.5)) / (2.0 * a);
            System.out.println("The roots are " + r1 + " and " + r2);
        } else if (d == 0.0) {
            double r1 = -b / (2.0 * a);
            System.out.println("The root is " + r1);
        } else {
            System.out.println("Roots are not real.");
        }
    }
}