package pkg.context;
import pkg.interfaces.IFly;

public class Duck {
    protected IFly flyStrategy;

    public Duck() {}

    // FLY 
    public void setFlyStrategy(IFly flyStrategy) {
        this.flyStrategy = flyStrategy;
    }
    public void fly() {
        this.flyStrategy.fly();
    }
}
