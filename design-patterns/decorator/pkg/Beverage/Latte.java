package pkg.Beverage;

public class Latte extends Beverage {
   private int COST = 20;
   
   @Override
   public int getCost() {
       return this.COST;
   }
}
