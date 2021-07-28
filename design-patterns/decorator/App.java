import pkg.Beverage.*;
import pkg.Decorator.*;

public class App {
    public static <T> void print(T msg) {
        System.out.println(msg);
    }
    
    public static void main(String[] args) {
        System.out.println("Decorator pattern");

        Beverage espresso = new Espresso();
        print("cost (espresso): " + espresso.getCost());
        espresso = new MilkDecorator(espresso);
        print("cost (espresso with milk): " + espresso.getCost());
        
        Beverage latte = new Latte();
        print("cost (latte): " + latte.getCost());
        latte = new SoyDecorator(new MilkDecorator(latte));
        print("cost (latte with milk and soy): " + latte.getCost());
    }
}