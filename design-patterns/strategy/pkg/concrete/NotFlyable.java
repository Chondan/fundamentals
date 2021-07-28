package pkg.concrete;
import pkg.interfaces.IFly;

public class NotFlyable implements IFly {
   public void fly() {
       System.out.println("Hello, I cannot fly!!");
   }
}
