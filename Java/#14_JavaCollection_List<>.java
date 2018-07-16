
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;

public class CollectionListMain {

    /*
        # Collection 의 정의 = 자료구조
        # 다양한 자료구조형이 제공되는 이유는 데이터의 성질에 따라서 데이터를 관리해야하는 방식이 다르기 때문
        # 콜렉션들도 결국 객체자료형이고 이들은 메모리상에 주소값으로 존재한다.

        List 계열 컬렉션 클래스 살펴보기
        배열과 비슷하지만 배열의 단점을 보완, 크기를 고정하지않아도됨

        알고있으면 도움이되는 Collections 클래스
        Collections.sort(List<>); // 리스트를 오름차순으로 정렬한다
        Collections.reverse(Linst<>); // 리스트를 현재상태를 기준으로 역순으로 정렬한다.
        Collections.binarysearch(List<>,int target); // 정렬된 리스트를 기준으로 타겟을 이진탐색을 통해 찾아낸다
        Collections.max(Collection<>); // 콜렉션에서의 최고값을 반환
        Collections.min(Collection<>); // 콜렉션에서의 최소값을 반환
        Collections.copy(List<> dest, List<> src); // (두 리스트의 크기가 같은 상태에서) src의 원소의 내용을, dest에 복사
        Collections.swap(List<>, int index, int index2); // list에서 두 인덱스의 값에 해당되는 두 수를 바꿈

        ArrayList
        배열과 매우 비슷. 인덱스가 존재하며 데이터는 중복되어도 상관없다
        * add(Data) : arrayList 에 값이 Data인 원소 추가
        * get(int index) : index에 해당되는 원소를 불러옴
        * set(int index, Data) : index에 해당되는 원소를 Data로 변경함
        * size() : arrayList의 사이즈를 리턴함
        * remove(int index) : arrayList의 index번째의 원소를 삭제하고 배열을 댕김
        * clear() : arrayList의 원소를 전부 삭제함

        LinkedList
        ArrayList와 거의 비슷함
        * add(Data) : arrayList 에 값이 Data인 원소 추가
        * add(int index, Data) : index번째에 값이 Data인 원소를 추가
        * get(int index) : index에 해당되는 원소를 불러옴
        * set(int index, Data) : index에 해당되는 원소를 Data로 변경함
        * size() : arrayList의 사이즈를 리턴함
        * remove(int index) : arrayList의 index번째의 원소를 삭제하고 배열을 댕김
        * clear() : arrayList의 원소를 전부 삭제함

    */

    public static void main(String[] args) {
        ArrayList<String> arrayList =  new ArrayList<>(); //arrayList 선언
        arrayList.add("zebra"); // arrayList에 원소 추가
        arrayList.add("element");
        arrayList.add("high");
        arrayList.add("abstract");
        System.out.println(arrayList);

        Collections.sort(arrayList);
        Collections.reverse(arrayList);


        System.out.println(arrayList);

        String temp = arrayList.get(3);
        System.out.println(temp);

        arrayList.set(0,"str0");
        System.out.println(arrayList);

        int arraySize = arrayList.size(); // 여기서는 size()를썼네
        System.out.println(arraySize);

        arrayList.remove(0);
        System.out.println(arrayList);

        arrayList.clear();
        System.out.println(arrayList);

        arrayList = null; // null로 지정했다는건 메모리의 주소와 링크가 안되어있어서 내용물이 없는것
        System.out.println(arrayList);
        //System.out.println(arrayList.size());

        LinkedList<Integer> linkedList = new LinkedList<>();
        LinkedList<Integer> linkedList2 = new LinkedList<>();

        linkedList.add(8);
        linkedList.add(6);
        linkedList.add(2);
        linkedList.add(3);
        System.out.println(linkedList);
        linkedList2.add(1);
        linkedList2.add(2);
        linkedList2.add(3);
        linkedList2.add(4);
        System.out.println("변환전 : " + linkedList2);

        Collections.copy(linkedList2,linkedList);
        System.out.println("변환후 : " + linkedList2);

        linkedList.add(2,4);
        System.out.println(linkedList);
        System.out.println(linkedList.get(3));
        linkedList.set(2,5);
        System.out.println(linkedList);

        int linkedlistSize = linkedList.size();
        System.out.println(linkedlistSize);

        linkedList.add(1);

        int linkedlistSizeAfter = linkedList.size();
        System.out.println(linkedlistSizeAfter);

        Collections.sort(linkedList);
        System.out.println("정렬후 : " + linkedList);
        System.out.println(Collections.binarySearch(linkedList,3));
        System.out.println(Collections.max(linkedList));
        Collections.swap(linkedList,1,2);
        System.out.println("스왑후 : "+ linkedList);

    }
}
