package pkg.Receiver;

public class Lamp {
    public boolean isLightOn = false;

    public void turnLightOn() {
        this.isLightOn = true;
    }

    public void turnLightOff() {
        this.isLightOn = false;
    }
}
