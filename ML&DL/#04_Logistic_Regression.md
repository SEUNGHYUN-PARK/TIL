Machine Learning & Deep Learning
===================================
Logistic Regression
------------------------------------

### CONTENTS
* [Intro](#intro)
* [Classification](#classification)
* [Classification에서 Linear Regression을 사용하면 야기되는 문제점](#classification에서-linear-regression을-사용하면-야기되는-문제점)
* [Classification을 위한 Hypothesis 재정의](#classification을-위한-hypothesis-재정의)  
* [Logistic Classification의 Cost & Gradient decent](#logistic-classification의-cost-&-gradient-decent)


### Reference
* [Youtube - 모두를 위한 딥러닝 강좌 시즌1](https://www.youtube.com/watch?v=BS6O0zOGX4E&list=PLlMkM4tgfjnLSOjrEJN31gZATbcj_MpUm&index=1)

### Intro
* Logistic Regression을 배우기 앞서 Linear Regression에 대해 먼저 짚어보자
* 기존의 Linear Regression에서의 기준이 되는 가설함수 H(x) = Wx
* 그 기준과 실제 데이터의 차이를 나타내는 cost함수
* cost값이 커버린상태에서는 문제가 되므로 cost값이 최저인 지점을 찾아야한다
* 임의로 설정했던 W값을 재정의하는 방법으로는 현재W값에서 cost가 제일 낮은 지점의 기울기와 learning_rate의 곱만큼을 뺴줘야한다(Gradient descent)

![](https://postfiles.pstatic.net/MjAxODExMDZfMjYy/MDAxNTQxNDY1NjI0MTYz.sojT0xotC1unAFBZikUhV9DWSg8JvB3s8DcJ6cYZ7xUg.8crOMuILbiRd1Zhv0yy__9qTv4jJKrJAIV1jshMB8aUg.PNG.npqfr123/image.png?type=w773)

### Classification(Binary)
* 두 가지의 정해진 카테고리 안에서 하나를 고르는 것
  * 스팸인지 아닌지 (스팸메일인지 아닌지)
  * 페이스북 피드의 내용이 선호분야인지 아닌지 (좋아요를 누른 피드와 비슷한 글끼리 분류)
  * 신용카드의 도난여부(사용패턴에 따라 분류)
* **0,1 encoding을 통해 분류**
* 외에도 주식시장동향, 질병확진에 도움이 됨

### Classification에서 Linear Regression을 사용하면 야기되는 문제점
* ***잘못된 결과물이 나올 수 있다***
* 아래의 그림을 보면 알 수 있다
  * 아래 그림을 보면 기존의 WX의 H(X)가 존재한다 하지만 classification에서의 결과는 0혹은 1이다. 따라서 일정값이상하면 전부 1이고 아닐경우는 0인셈이다.
  * 그러나 문제가 있다 만약 **일정 값 이상이긴 하나, 격차가 많이나는 엄청나게 큰 수가 X로 들어오게 된다면 WX그래프 자체는 기울어지고**, 따라서 특정값으로 기대되는 데이터임에도 불구하고 잘못된 데이터가 나오게되는 것이 문제다
  * 또한 H(X)로 잡은 WX+B의 범위는 제한이 없다. 따라서 0보다 작은값이 1보다 큰값이 나올수도있다. 따라서 ***Classification에는 Linear Regression을 사용할 수 없다*** 그리고 Classification을 위한 H(X)를 재정의해야한다.

![Classification에서 Linear Regression을 사용하면 야기되는 문제점](https://postfiles.pstatic.net/MjAxODExMDZfMTQg/MDAxNTQxNDc4NjU3NTA5.y0d95IN_X3mHKi7ZZCl5CP1gYg9-NqfvujySAy8uC5Eg.CBIpTrx3E2otGWeA4mSu-ZNiHFgMVAv9M0nrW-7Tm5Mg.PNG.npqfr123/image.png?type=w773)

### Classification을 위한 Hypothesis 재정의
* 따라서 H(X)의 값을 0과 1사이의 값을 만들어주는 함수를 고안하는게 고민이었고, 그 결과 시그모이드 함수를 이용해서 0과 1사이의 값으로 바꿔주는 방법을 생각했다
* 기존의 H(X)를 Z로 치환하면 Z=H(X)로 표현할 수 있고, 하나의 상수화를 시켜주면 Logistic Regression의 H(X)를 도출할 수 있다 **H(X) = 1/1+e^XW^T (T는 transpose)**
![](https://postfiles.pstatic.net/MjAxODExMDZfMjM1/MDAxNTQxNDgyNTg2OTM0.dRT0Wfh0RUTcqYgpKownlhZwaDbOCQEaiu-9owfGo1Qg.38lCrkGkQLt9Gw5x10X_yzFhPwBgJS2tslvDwCqB50Ug.PNG.npqfr123/image.png?type=w773)
![](https://postfiles.pstatic.net/MjAxODExMDZfNDUg/MDAxNTQxNDgxMDE0NzA4.tHoZksqsRVcAgl-slarQsDcnZPpxUWbGRCsG7hUEd5Qg.QNiH-5dGKgsMS9B6K3oJ4tW8HgfNNpQ8xafi3EZ7Ylkg.PNG.npqfr123/image.png?type=w773)

### Logistic Classification의 Cost & Gradient decent
* 기존의 Linear Regression 방식의 cost함수는 최저점에서만 변곡점이 존재하기때문에 global minimum값을 찾을 수 있다 하지만, logistic classification에서 cost 함수를 Linear regression 방식으로 표현하면 변곡점이 무수히 많은 함수가 생성 될 것이다. 따라서 H(X)를 재정의했듯이, 이 역시 재정의 해줘야한다.
![](https://postfiles.pstatic.net/MjAxODExMDZfNjMg/MDAxNTQxNDgzMTQ2MDA1.t2JjbUf-QPe0TbbimWSiHGvaYaXtDPqYfPf40_3d_YMg.gZL1kXK1PpP95U_Ljs4wyOgr6VGPS96a3hY-iGT0w_4g.PNG.npqfr123/image.png?type=w773)

* **이를 재정의한 식은 다음과같다.**
![](https://postfiles.pstatic.net/MjAxODExMDZfMjc5/MDAxNTQxNDg0MTcyNzY3.EyghaY1mAIkuOadD98353NhmSsvGP9lAjyfbBh1u42Ug.gmxbTQBWTcTpjmvlotxEYIMu2fG4K3G1xKPP8T_Xjusg.PNG.npqfr123/image.png?type=w773)

* 이렇게 정의한 이유는 y의 값에 따라 H(X)가 정해지고 H(X)의 값에 따라 Cost값이 달라지기때문이다. y=1인 상황에서, H(X)를 1로 잡으면, 전체 cost값은 0이되지만 만약 H(X)를 0으로 잡는다면 cost가 무한대로 증가하기떄문에 시스템에 부담을 주게된다. 반대로 y=0인 상황에서 H(X)를 0으로 잡으면 cost값도 0이 될테고 H(X)를 1로 잡으면 cost값이 무한대로 상황을 확인할 수 있을 것이다.
* 따라서 두 로그함수를 하나의 평면상에 나타내면 linear regression의 cost function과 비슷한 모양이 되고, 이 형태에서는 cost의 최소값을 구할 수 있게된다.
![](https://postfiles.pstatic.net/MjAxODExMDZfNTgg/MDAxNTQxNDg0MTg5NTYw.-KIzDH_Du_YB7MzqYlA6GIznm2GtEX727g5Ej-713Zsg.h9dydVIHFWVuYd1S6p-3JmgKCubNzISjJF0S34Ef9_Ig.PNG.npqfr123/image.png?type=w773)

* 정리해서 식을 하나로 나타내면 다음과 같다. 두 식을 하나의 식으로 나타내기위해 별도의 과정을 거쳤다(그냥 1일때냐,0일떄냐에 따라 왼쪽 항이 사라질지 오른쪽 항이 사라지는거에 대해 장치를 깔아둔 것
![](https://postfiles.pstatic.net/MjAxODExMDZfNTUg/MDAxNTQxNDg0MjAyMTM3.ZGGWcWPCu_8n4_ODT-6XsivH32TZSAobvN8yVZlfeXIg.j5OLod6G35ZFKS8iHgwqd9NPCEpWzZEzbCyZlVsx_E4g.PNG.npqfr123/image.png?type=w773)

* 형태가 변형되었기때문에 Gradient decent algorithm을 적용할 수 있고, 이를 코드로 나타내면 아래의 그림과 같이 나타낼 수 있다.
![](https://postfiles.pstatic.net/MjAxODExMDZfNzQg/MDAxNTQxNDg0MjMxNzQz.HsFH_n0N0WDN4cG1A9RTV48KmwmTdvdXjRdInxD50aog.6Sibfc3d69iOTS3c783qpCNG5L0VoKt7_vIrarWc1rog.PNG.npqfr123/image.png?type=w773)

![](https://postfiles.pstatic.net/MjAxODExMDZfNCAg/MDAxNTQxNDg0MzExODE5.FwBnN24Leo5oMw2R5a7UC9I5A1jnVzDJkCb2OcU-iBIg.yJz8MoTmo0yKLKd58vJruUcn4Ojo1S46hY0Wo9Pi2TQg.PNG.npqfr123/image.png?type=w773)
