package pkg.context;
import pkg.concrete.Flyable;

public class FlyableDuck extends Duck {
    public FlyableDuck() {
        this.flyStrategy = new Flyable();
    }
}
