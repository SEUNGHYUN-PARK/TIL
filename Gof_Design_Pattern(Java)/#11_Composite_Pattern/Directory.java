import java.util.ArrayList;

public class Directory implements Node{
    private String DirName;
    private ArrayList<Node> children;
    private static int dirnumber=0;

    public Directory()
    {
        children = new ArrayList<>();
        String temp = Integer.toString(dirnumber);
        DirName = "Directory"+temp;
        System.out.println("디렉토리생성 완료, 파일명 : "+ DirName);
        dirnumber++;
    }

    public void add(Node _node)
    {
        System.out.println(DirName+"에 "+_node.getName()+"를 추가했습니다");
        children.add(_node);
    }
    public void directorySearch()
    {
        System.out.println("====현재디렉토리 명 : "+ DirName+"=========");
        for (int i = 0; i < children.size(); i++) {
            System.out.println(children.get(i).getName());
        }
        System.out.println("==============================");
    }
    @Override
    public String getName() {
        return DirName;
    }
}
