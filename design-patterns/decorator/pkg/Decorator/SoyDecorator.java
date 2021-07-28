package pkg.Decorator;
import pkg.Beverage.Beverage;

public class SoyDecorator extends AddonDecorator {
   
    private int COST = 2;
    
    public SoyDecorator(Beverage beverage) {
        this.beverage = beverage;
    }
    
    @Override
    public int getCost() {
        return this.beverage.getCost() + this.COST;
    }
}
