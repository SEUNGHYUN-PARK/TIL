public class File implements Node {
    private String filename;
    private static Integer filenumber = 0;

    public File()
    {

        String temp = Integer.toString(filenumber);
        filename = "file"+temp;
        System.out.println("파일생성 완료, 파일명 : "+ filename);
        filenumber++;
    }

    @Override
    public String getName() {
        return filename;
    }
}
