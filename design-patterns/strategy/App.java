import pkg.concrete.Flyable;
import pkg.concrete.NotFlyable;
import pkg.context.*;

public class App {
    public static void main(String[] args) {
        System.out.println("Strategy pattern");

        // Set strategy
        Duck duck = new Duck();
        duck.setFlyStrategy(new Flyable());
        duck.fly(); 
        duck.setFlyStrategy(new NotFlyable());
        duck.fly();

        // Or hard code it into FlyableDuck
        Duck flyableDuck = new FlyableDuck();
        flyableDuck.fly();
        flyableDuck.setFlyStrategy(new NotFlyable()); // Can also change strategy too
        flyableDuck.fly();
    }
}