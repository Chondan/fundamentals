package pkg.Decorator;
import pkg.Beverage.Beverage;

public class MilkDecorator extends AddonDecorator {
   
    private int COST = 1;
    
    public MilkDecorator(Beverage beverage) {
        this.beverage = beverage;
    }
    
    @Override
    public int getCost() {
        return this.beverage.getCost() + this.COST;
    }
}
