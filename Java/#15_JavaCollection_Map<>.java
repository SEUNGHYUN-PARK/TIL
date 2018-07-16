import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;

public class CollectionMapMain {

    /*
        Map 계열의 컬렉션 클래스
        한마디로 Hash, 즉 Key와 Value로 구성된 자료형
        쉽게 생각해서 물품보관함을 예로 들 수 있다. 보관함 번호는 중요치않고(인덱스) 보관함 키(key)와 보관함 안에있는 내용물(value)이 중요하다.
        따라서 Map에는 따로 인덱스가 존재하지않으며, 중복된 키 값은 존재하지않는다.
        종류로는 HashMap,HashSet이 있다.

        # HashMap의 선언
          HashMap<Wrapper, Wrapper> hashmap = new HashMap<>();

        # HashMap의 메소드
          put(Key,Value); : Key,Value값을 매핑해서 HashMap에 삽입
          get(key);// HashMap에 해당 키 값을 가지고 있는 value값을 추출해냄
          remove(Key); // HashMap에 해당 키 값을 가지고 있는 value값을 삭제함
          clear(); // HashMap에 있는 데이터 전부 삭제
          keyset(); //hashMap에 있는 모든 데이터를 반환
          iterator(); // 반복자를 얻어오는 메소드

        # HashSet의 선언
          HashSet<Wrapper, Wrapper> hashset = new hashset<>();

        # HashSet의 메소드
          add(Object); // set에 객체를 추가한다.
          remove(Object); // set에서 Object를 타겟으로하는 데이터를 삭제
          size(); // set의 사이즈 추출


        Iterator
        데이터를 반복적으로 검색하는데 아주 유용한 인터페이스
        모든 자료구조형에서 iterator()메소드를 지원한다.


    */
    public static void main(String[] args) {
        HashMap<Integer,String> hashMap = new HashMap<>();
        hashMap.put(0,"str0");
        hashMap.put(1,"str1");
        hashMap.put(2,"str2");
        hashMap.put(3,"str3");

        String str = hashMap.get(0);
        System.out.println(str);

        hashMap.remove(0);
        System.out.println(hashMap);

        hashMap.clear();
        System.out.println(hashMap);

        hashMap.put(0,"str0");
        hashMap.put(1,"str1");
        hashMap.put(2,"str2");
        hashMap.put(3,"str3");

        HashMap <String, String> hashMap1 = new HashMap<>();
        hashMap1.put("P","plus");
        hashMap1.put("S","sub");
        hashMap1.put("H","high");
        hashMap1.put("p","Pie");


        Iterator<String> iterator = hashMap1.keySet().iterator();
        while(iterator.hasNext())
        {
            String temp = hashMap1.get(iterator.next());
            System.out.println(temp); // 정렬의 유무 상관없이 그냥 다 긁어온다.
        }


        HashSet<String> hashSet = new HashSet<>();
        hashSet.add("str0");
        hashSet.add("str1");
        hashSet.add("str2");
        hashSet.add("str3");
        hashSet.add("str3");
        System.out.println(hashSet);

        hashSet.remove("str0");
        System.out.println(hashSet);
        System.out.println("사이즈 : "+ hashSet.size());

    }


}
