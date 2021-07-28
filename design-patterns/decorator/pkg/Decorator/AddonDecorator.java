package pkg.Decorator;
import pkg.Beverage.Beverage;

public abstract class AddonDecorator extends Beverage {
    public Beverage beverage;
    
    @Override
    public void getDesc() {
        System.out.println("I am decorator.");
    }
}
