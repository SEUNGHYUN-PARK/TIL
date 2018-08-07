public class Main {
    public static void main(String[] args) {

        File file = new File();
        Directory dir = new Directory();
        Directory dir2 = new Directory();
        dir.add(file);
        dir.add(dir2);
        dir.directorySearch();
        System.out.println();

        Directory seconddir = new Directory();
        seconddir.add(dir);
        seconddir.directorySearch();

    }
}
