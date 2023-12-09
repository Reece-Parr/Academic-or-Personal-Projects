public class App {

  public static void main(String[] args) {
    // Prints out number from 1 to 100 and prints either Fizz on multiples of 3, 
    // Buzz on multiples of 5 and both Fizz Buzz on multiples of 15.
    for (int i = 1; i <= 100; i++) {
      System.out.println(i);
      if (i % 3 == 0) {
        System.out.println("Fizz");
        if (i % 3 == 0 && i % 5 == 0) {
          System.out.println("FizzBuzz");
        }
      } else if (i % 5 == 0) {
        System.out.println("Buzz");
      }
    }

  }
}