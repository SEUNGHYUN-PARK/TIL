public class ExceptionMain {
    public static void main(String[] args) {
        /*
            # 예외란
            - 프로그램에서 문제가 발생될 만한 곳을 예상해 사전메 문제가 발생시 이렇게 해라라고 프로그래밍하는것을 예외처리라고함

            # 예외처리의 필요성
            - 10/0은 연산할수없는데 이를 처리하면 에러가 뜬다

            # 예외처리 방법
            1. try catch문 이용

                try
                {
                    문제가 발생할 수 있는 로직을 기술
                }
                catch(Exception e)
                {
                    Try{}안에서 문제가 발생했을 때 대처방안을 기술
                }
                finally
                {
                    예외의 발생유무에 상관없이 무조건 실행
                }

            2. throws 이용

                특정 메소드 이름 옆에 throws Exception이라는 키워드를 붙이고
                메소드 안에서 에러가 생길만한 상황에 if조건을 달고
                throw new exception();

        */

        int i=10,j=0;
        try{
        System.out.println(i+j);
        System.out.println(i-j);
        System.out.println(i*j);
        System.out.println(i/j); //0으로 나누는건 불가능하
        }catch (Exception e) {
            System.out.println(e.getMessage());
        }

        ThrowsTest throwsTest = new ThrowsTest();
    }
}
