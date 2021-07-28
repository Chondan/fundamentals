package pkg.Beverage;

public class Espresso extends Beverage{
    private int COST = 10;
    
    @Override
    public int getCost() {
        return this.COST;
    }
}
