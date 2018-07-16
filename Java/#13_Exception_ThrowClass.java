public class ThrowsTest {
    public ThrowsTest()
    {
      actionC();
    }

    private void actionC() {
        actionB();
    }

    private void actionB() {
        System.out.println("actionB");
        try{
            actionA();
        }
        catch (Exception e) // 리턴된 데이터에서 예외가 있을경우 예외에대한내용출력
        {
            System.out.println("예외발생 : " + e.getMessage());
        }
    }

    private void actionA() throws Exception
    {
        System.out.println("actionA");
        int a[] = {1,2,3,4};
        int i = 5;
        if(i>=4)
            throw new Exception(); // 예외처리에 대한 내용을 리턴해줌
    }
}
