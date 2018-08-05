public class Main {
    public static void main(String[] args) {

        Computer computer = ComputerBuilder.start()
                                            .setCPU("i9")
                                            .setRAM("32GB")
                                            .setStorage("256GB")
                                            .finish();

        System.out.println(computer.showDeviceInfo());
    }
}
