import java.io.*;

public class IO {

    /*
        이미지,동영상등의 데이터에 주로 사용
        InputStream
        OutputStream

        문자열에 주로 사용
        Reader
        Writer
    */

    public static void main(String[] args) {
        InputStream is = null;
        OutputStream os = null;

        try{
            String inputFile_Path="";// 기호에 맞춰 적을것
            String outputFile_Path=""; // 기호에 맞춰 적을것
            is = new FileInputStream(inputFile_Path);
            os = new FileOutputStream(outputFile_Path);

            byte[] bs = new byte[5];
            while(true)
            {
                int cnt = is.read(bs);
                if(cnt==-1)
                    break;
                os.write(bs,0,cnt);
            }
        }
        catch (Exception e)
        {
            System.out.println(e.getMessage());
        }
        finally {
            if(is!=null)
            {
                try
                {
                    is.close();
                }
                catch(Exception e2)
                {
                    System.out.println(e2.getMessage());
                }
            }
            if(os!=null)
            {
                try {
                    os.close();
                } catch (Exception e2) {
                    System.out.println(e2.getMessage());
                }
            }
        }

    }
}
