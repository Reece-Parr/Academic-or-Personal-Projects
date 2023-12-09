public class Droid {
    // Makes use of Classes and Methods with a Droid Example.
    // User can create a Droid and make the droid do tasks.
    // Tasks deplet the Droid's energy.
    // HOWEVER, energy can be transfered between other DROID objects.
    String name;
    int batteryLevel = 100;
  
    public Droid(String droidName) {
       name = droidName;
    }
  
    public void performTask(String task) {
      System.out.println(name + " is performing task: " + task);
      batteryLevel = batteryLevel - 10;
    }
  
    public void energyReport() {
      System.out.println("Current Battery Level: " + batteryLevel);
    }
  
    public void energyTransfer(int power, Droid transferTo) {
      batteryLevel = batteryLevel - power;
      transferTo.batteryLevel = transferTo.batteryLevel + power;
      System.out.println(name + " has transferred " + power + "% of battery to " + transferTo.name + " and his battery is now at " + batteryLevel + "%");
    }
  
    public static void main(String[] args){
      Droid codey = new Droid("Codey");
      Droid jake = new Droid("Jake");
      
      codey.performTask("Clean");
      codey.energyReport();
      codey.performTask("Dance");
      codey.energyReport();
      jake.energyReport();
  
      jake.energyTransfer(10, codey);
    }
  
    public String toString() {
      return "Hello, I'm the droid: " + name;
    }
    
}
