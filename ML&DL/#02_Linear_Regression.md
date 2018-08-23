Machine Learning & Deep Learning
===================================
Linear Regression
------------------------------------

### CONTENTS
* [Definition](#definition)
* [How to minimize cost](#how-to-minimize-cost)

### Reference
* [Youtube - 모두를 위한 딥러닝 강좌 시즌1](https://www.youtube.com/watch?v=BS6O0zOGX4E&list=PLlMkM4tgfjnLSOjrEJN31gZATbcj_MpUm&index=1)

### Definition
* Supervised Learning에서는 기존의 데이터들을 학습시켜(Training), 하나의 모델을 만든다. 이 모델을 기반으로 새로운 데이터를 대입 했을 때 특정 값을 도출해 내는 것을 Linear Regression이라한다

![](https://postfiles.pstatic.net/MjAxODA4MjJfNjAg/MDAxNTM0OTQ1NzA1NDQ4.N25xaH7YMLrubeWce363LbkMOjiXg_3HV85WFNRlsOEg.ULgKDX3Fj56bJ-yfsTAtcEMOp9Hn3xr7ccp6zXvav8Ag.PNG.npqfr123/image.png?type=w773)

* 위 그림은 데이터의 집단을 의미한다. 데이터를 의미하는 세 점을 기준으로 근사한 데이터 집단을 뽑아내야하고 후보 집단을 그림으로 표현하면 다음과 같다

![](https://postfiles.pstatic.net/MjAxODA4MjJfMTIx/MDAxNTM0OTQ2MTE3NTky.nCnwfpgh4VD7izJnP-ksuVLNI2sbBJhydC666S1MBvUg.Q_VdC-EgC6LSTYRadtDR3fnR2wbITpVuVt1-GmY2dOcg.PNG.npqfr123/image.png?type=w773)

* 각각의 직선들은 H(x) = Wx + b의 형태로 구성되있다.(W,b는 전부 다름) **H(x)의 의미는 가설을 통해 뽑아 낸 데이터들을 의미하며, 저 직선들 중 세개의 데이터에 가까울수록 보다 정확하고 신뢰할 수 있는 데이터 집단을 예측했다고 볼 수 있다.** 이를 구하는 과정(식)을 ***Cost function*** 이라 칭한다  
Cost function에 대한 해당식은 H(x)-y로 가정해보자.
하지만 이 방법들은 문제가 있다. H(x)-y값이 음수가 나오는 경우가 있기때문에, 단순히 뺴기만 해서는 안된다.
그럼 어떻게 해야할까.
***정답은 (H(x)-y)^2 이다. 제곱을 하는 이유는 이전 H(x)-y에서 얻은값이 비록 음수일지라도 제곱을 하면 양수가 되며, 제곱이 되면서 페널티도 제곱이 되기때문이다. 즉 유사한 모집단이 아닐수록, 더 큰 페널티를 갖게 된다.***
이 개념을 통해 단순히 세점이 아닌 수많은 데이터들을 통해 <u>하나의 데이터 군집과 비교할 수 있고</u> 이를 수식으로 나타내면 다음과 같다.

![](https://postfiles.pstatic.net/MjAxODA4MjNfMTg2/MDAxNTM0OTUwMjk1NDAw.cE42XILWhxCwLYAoCpIvcsv1F3yN4ac1n34klOWM_Isg.GyEdS8-F3s8TgCUsRIaNlOnS6w7f1jkIolHUroX_AhUg.PNG.npqfr123/image.png?type=w773)

* 위 cost는 **cost(W,b)로 나타낼 수 있으며, 우리가 원하는건 cost가 최소값을 지니는 W, b를 구하는 것이다.**

### How to minimize cost
* 우리가 가지고 있는 모델과 실제 데이터의 차이를 측정하는 cost function은 데이터의 차이의 제곱을 다 합한 값에서 데이터의 갯수만큼 나눠준거와 같다.(위 사진 빨간 사각형 참고) 우리는 가설에 대한 정확한 예측을하기위해 cost가 최소일 때의 W,b를 찾아내야한다  

![](https://postfiles.pstatic.net/MjAxODA4MjNfMjY4/MDAxNTM0OTk3NjU5OTA3.Xqhs7GHeBnfJ0tUcU7TZ_4Gx579GmF_UXyr2JoYzHqAg.PtWXxlKHfsWZ9nf11HeIISRXyuUvxUU3XKTVBGCyHY0g.PNG.npqfr123/image.png?type=w773)

* 위 그림은 데이터 3개짜리 모델에서 W,b를 찾는 과정이다. 편의를 위해 **H(x)= Wx** 로 설정해줬다. W의 값에 따라 cost(w)의 값이 다름을 확인할 수 있었고, W=1 일때 cost값이 최소값이 나옴을 확인할 수 있었다.(W=2일땐 cost(W)=4.67) 세개의 데이터를 갖는 모델을 확장시켜 무수히 많은 데이터가 있는 모델에 적용하면, 다음과같은 그림처럼 W에 따른 cost 값들을 확인할 수 있다. 흡사 이차함수를 닮았다.

![](https://postfiles.pstatic.net/MjAxODA4MjNfMjkw/MDAxNTM1MDAxMjQxMjY3.__JIvGPzEtq5ZL-LdCgvYSN_GT5POY66pMSJT5D8Hkcg.skk8OsImwgutVbavyAop8lavECH2vKtfwQgVdvkW79Eg.PNG.npqfr123/image.png?type=w773)  

* 위 그래프를 확인하면, W가 1일때가 cost가 0에 근사함을 확인할 수 있다. 하지만 이는 우리의 육안으로 확인한것이고, 기계가 스스로 검색하기에는 우리의 방식이 제한된다. 그럼 어떻게 해야할까? 이는 gradient descent algorithm을 이용하면된다.(그래서 예제코드에 GradientDescentOptimizer 이 메소드가 있었구나...)
지금부터 gradient descent algorithm이 최소 코스트를 찾는 알고리즘을 설명하려한다. 결론부터 이야기하면 다음의 공식으로 최소 코스트 값을 산출해내는 W를 찾아낸다


![](https://postfiles.pstatic.net/MjAxODA4MjNfMTYg/MDAxNTM1MDAzODU5ODIz.-p1GFuHpwUMI0HcE5rOOJHb26-xOj0LhUPwd7cMwXr8g.aV8DyWhAz7oZrBHVsJ5t2M2B97t3Q-d6TMAO3rDoTawg.PNG.npqfr123/image.png?type=w773)

* cost(W)를 W에 대해 미분을 하면 일차함수의 꼴이나오게된다. W값에서 W값의 코스트의 미분한결과를 추가적으로 -연산해줘 코스트가 최소인 W를 찾게되는 것이다(미분과정은 생략)

![](https://blogfiles.pstatic.net/MjAxODA4MjNfODAg/MDAxNTM1MDA2MTEzMTc0.1T5oG9hcpnAzVBOa_UL6TAKuT7NCGFgVIacZVHEDRk4g.RlU2_aUbq3EHTtZoXIj66dNOQcnrK5AZfJ-brzTJZoQg.PNG.npqfr123/image_6327630511535005198991.png?type=w1)

* 아래 두 그림은 Gradient Descent Algorithm을 적용할 수 있는 데이터와 그렇지 않은 데이터를 나타낸 그래프이다. 우선 첫번째 그림을 보면 W,b 그리고 코스트 값이 규칙성이없기떄문에 이 데이터는 gradient Descent Algorithm을 적용할 수 없다. 반대로, 두번째그림은 W,b에 따른 코스트값에 규칙이 존재하기 떄문에 gradient Descent Algorithm을 적용할 수 있다.

![gradient Descent Algorithm을 이용할 수 없는 데이터 ](https://postfiles.pstatic.net/MjAxODA4MjNfNjgg/MDAxNTM1MDA2NTM3MzI4._c-tuD_UPAztsj1Z8t9wKaHI2O4L0D4iPfZgwLsURCMg.rP48oSSVEmtHI8Xykh76do2Hjgl0ARlWgAioup3dykkg.PNG.npqfr123/image.png?type=w773)


![gradient Descent Algorithm을 이용할 수 있는 데이터 ](https://postfiles.pstatic.net/MjAxODA4MjNfMjE5/MDAxNTM1MDA2NTEzNTU3.EYqA6pRlYG9f_5WxfHF-NWmY_3qNdcK_BysamRHTsdMg.YSMFppauZKMRQfZ03OM2xPXh8SqKHKKRg4DiUV6Ir00g.PNG.npqfr123/image.png?type=w773)
