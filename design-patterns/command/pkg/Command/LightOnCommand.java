package pkg.Command;
import pkg.Receiver.Lamp;

public class LightOnCommand implements ICommand {
    Lamp lamp;
    
    public LightOnCommand(Lamp lamp) {
        this.lamp = lamp;
    }
    
    public void execute() {
        this.lamp.turnLightOn();
    }

    public void unexecute() {
        this.lamp.turnLightOff();
    }
}

