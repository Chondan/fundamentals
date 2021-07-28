package pkg.Invoker;
import pkg.Command.ICommand;

import java.util.ArrayList;
import java.util.List;

public class Remote {
    private List<ICommand> commands = new ArrayList<ICommand>(); 

    public void execute(ICommand command) {
        this.commands.add(command);
        command.execute();
    }

    public void undo() {
        ICommand latestCommand = commands.remove(commands.size() - 1);
        latestCommand.unexecute();
    }
}
