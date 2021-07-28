import pkg.Invoker.Remote;
import pkg.Receiver.Lamp;
import pkg.Command.LightOnCommand;
import pkg.Command.LightOffCommand;

public class App {
    public static void main(String[] args) {
        // Invoker
        Remote remote = new Remote();

        // Receiver
        Lamp lamp = new Lamp();
        
        // Commands 
        LightOnCommand turnLightOn = new LightOnCommand(lamp);
        LightOffCommand turnLightOff = new LightOffCommand(lamp);

        remote.execute(turnLightOn);
        System.out.println("isLightOn: " + lamp.isLightOn);
        remote.execute(turnLightOff);
        System.out.println("isLightOn: " + lamp.isLightOn);
        remote.undo();
        System.out.println("isLightOn: " + lamp.isLightOn);
    }
}