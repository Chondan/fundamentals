package pkg.Command;
import pkg.Receiver.Lamp;

public class LightOffCommand implements ICommand {
    Lamp lamp;
    
    public LightOffCommand(Lamp lamp) {
        this.lamp = lamp;
    }
    
    public void execute() {
        this.lamp.turnLightOff();
    }

    public void unexecute() {
        this.lamp.turnLightOn();
    }
}
