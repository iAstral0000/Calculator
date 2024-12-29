import java.util.Scanner; 

  

public class Calculator { 

    public static double calculate(String op, double n1, double n2) { 

        if (op.equals("add")) { 

            return n1 + n2; 

        } else if (op.equals("sub")) { 

            return n1 - n2; 

        } else if (op.equals("mul")) { 

            return n1 * n2; 

        } else if (op.equals("div")) { 

            if (n2 == 0) { 

                System.out.println("Error: Division by zero"); 

                return Double.NaN; 

            } 

            return n1 / n2; 

        } else { 

            System.out.println("Invalid operation"); 

            return Double.NaN; 

        } 

    } 

  

    public static void main(String[] args) { 

        Scanner scanner = new Scanner(System.in); 

        System.out.println("Welcome to the calculator!"); 

  

        while (true) { 

            System.out.print("Enter operation (add, sub, mul, div) or 'quit' to exit: "); 

            String op = scanner.nextLine(); 

            if (op.equals("quit")) { 

                break; 

            } 

  

            System.out.print("Enter the first number: "); 

            double n1; 

            try { 

                n1 = Double.parseDouble(scanner.nextLine()); 

            } catch (NumberFormatException e) { 

                System.out.println("Error: Invalid number input"); 

                continue; 

            } 

  

            System.out.print("Enter the second number: "); 

            double n2; 

            try { 

                n2 = Double.parseDouble(scanner.nextLine()); 

            } catch (NumberFormatException e) { 

                System.out.println("Error: Invalid number input"); 

                continue; 

            } 

  

            double result = calculate(op, n1, n2); 

            if (!Double.isNaN(result)) { 

                System.out.println("Result: " + result); 

            } 

        } 

  

        scanner.close(); 

    } 

} 
