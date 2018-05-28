UNREAL ENGINE
==================

What is UE4
-------------------
* Blueprint(BP) -> Visual Scripting
* 굳이 코딩을 하지않아도 코딩한 것처럼 게임의 기능을 만들 수 있는 것
* 시각적으로 많은 도움을 줌.
* C++ 친화
* UE3 vs UE4
  * UE3 - Kismet(Level Based)
   * UE4 - Level Blueprint (1 Per Level) /  Class Blueprint(Multiple)

 How to use UE4
 --------------------
 1. Epic Gamelauncher  - Unreal Engine 실행
 2. New Project 생성
 3. 기호에 맞게 설정 추가 (처음인지라 시작용 컨텐츠 포함 체크)
 4. 경로 설정
 5.  Create Project 버튼 클릭

How to navigate Viewport
----------------------
* 마우스 우클릭 버튼을 누른채로 마우스를 움직이면 Viewport의 카메라를 조작할 수 있음  
* 마우스 우클릭 버튼을 누른채로 W(전진)A(좌회전)S(후진)D(우회전) 버튼들을 눌러 시점의 변화 가능  =>1인칭 슈팅게임처럼 시점 변환

How to control Object (Size Conversion, Rotate, Move, Etc...)
--------------------------------------------
* 객체 클릭 후 진행 객체 클릭 시 모서리 부분에 공간좌표를 의미하는 모양의 선 생성
* 스페이스를 누르면 기본적으로 모드가 변경됨
* Move mode -> 화살표 /  Size Conversion -> 끝이 뭉툭한 선 / Rotate -> 아치형
* 객체가 아무리 떠 있다 한들 End 버튼을 누르면 지면에 밀착
* Alt 버튼을 누른채로  Drag & Drop -> 객체 복사
* 만약 Object 복사를 잘못했을경우 유사한 다른 Object를 생성하길 원한다면,
   1. 잘못된 객체 클릭 그리고 교체하고자하는 객체 클릭
   2. 우측에 Static Mesh 를 보면 <- 모앙의 버튼이 있음 그걸 누르면 대체



 Tutorial #1 (2018.05.28)
 -----------------------
* Turning on a Light Via the level BP
이번 튜토리얼은 레벨별로 진행할 예정이기때문에 상단탭에서 New level - Default 클릭
새로운 레벨을 제작하는 창이 뜨고 상단의 Play버튼을 누르면 케릭터 하나가 생성됨
생성된 케릭터는 WASD로 조작이 가능하며 점프는 Space ~~(1인칭 슈팅게임느낌)~~
플레이를 멈추고 싶다면 Shift +f1 혹은 ESC 버튼을 누르면 해제됨
* 기본 Object 설치
  * Build a House
    1. 하단의 콘텐츠 브라우저에서 Startercontent 클릭
    2. Startercontent의 하단의 디렉토리  Architecture 폴더를 열면 각종 Static Mesh 존재
    3. Drag & Drop
  * Install Point Light
    1. 화면 좌측에 Point Light 클릭 후  Drag & Drop
    2. 전구의 초기상태를 설정해주고싶으면, 화면 우측의 Rendering 탭의
* Blueprint 설정
  1. 화면 상단의 블루프린트 버튼 클릭 -> 여러 선택지 중 레벨 블루프린트 제작 버튼 클릭 -> 새로운 창 생성
  2. 블루프린트 화면이동은 오른쪽 마우스를 누른채로 Drag & Drop
  3. 처음 블루프린트 BeginPlay Event, Tick Event는 블루프린트에서 가정 널리 사용되는 노드
     * BeginPlay : 게임이 시작되면 연결된 이벤트들이 모두 발동
     * Tick : 각 프레임마다 호출되는 노드, 이 노드와 연결된 이벤트들은 게임이 실행되는 동안 매 프레임마다 발동한다
  4. **특정 객체를 설정해주고싶다면 기존의 오브잭트를 설치한 화면으로 돌아가서 특정 객체를 선택한 후** 오른쪽 마우스 클릭
  -> 여기서는 전구를 설정하고싶으니 전구 클릭 후 블루프린트 화면에서 오른쪽 마우스 클릭
  5. 전구객체에 대해 설정을 해줘야하기때문에 객체 생성 -> Point Light 에 대한 레퍼런스 생성 버튼 클릭
  6. 레퍼런스가 생성이 되면 레퍼런스의 끝지점에 있는 조그마한 동그라미를 클릭 앤 드래드
  7. 그러면 파란선이 나올거고 여러 메뉴들이 뜸 -> **전구에서 적용할 수 있는** 여러 메뉴들을 의미
  8. 적절한 이벤트를 생성, 여기선 Toggle Visibility 설정
  9. BeginPlay 의 끝부분을  Toggle Visibility로 선연결(끝부분을 드래그하면 선이 생김)
  10. 제작 완료
