package pkg.concrete;
import pkg.interfaces.IFly;

public class Flyable implements IFly {
   public void fly() {
       System.out.println("Hello, I can fly...");
   } 
}
