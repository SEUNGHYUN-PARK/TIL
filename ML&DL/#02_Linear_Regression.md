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

* 각각의 직선들은 H(x) = Wx + b의 형태로 구성되있다.(W,b는 전부 다름) 저 직선들 중 세개의 데이터에 가까울수록 보다 정확하고 신뢰할 수 있는 데이터 집단을예측했다고 볼 수 있다. 이를 구하는 과정(식)을 Cost function이라 칭한다  
Cost function에 대한 해당식은 H(x)-y로 가정해보자.
하지만 이 방법들은 문제가 있다. H(x)-y값이 음수가 나오는 경우가 있기때문에, 단순히 뺴기만 해서는 안된다.
그럼 어떻게 해야할까.
***정답은 (H(x)-y)^2 이다. 제곱을 하는 이유는 이전 H(x)-y에서 얻은값이 비록 음수일지라도 제곱을 하면 양수가 되며, 제곱이 되면서 페널티도 제곱이 되기때문이다. 즉 유사한 모집단이 아닐수록, 더 큰 페널티를 갖게 된다.***
이 개념을 통해 단순히 세점이 아닌 수많은 데이터들을 통해 <u>하나의 데이터 군집을 예측할 수 있고</u> 이를 수식으로 나타내면 다음과 같다.

![](https://postfiles.pstatic.net/MjAxODA4MjNfMTg2/MDAxNTM0OTUwMjk1NDAw.cE42XILWhxCwLYAoCpIvcsv1F3yN4ac1n34klOWM_Isg.GyEdS8-F3s8TgCUsRIaNlOnS6w7f1jkIolHUroX_AhUg.PNG.npqfr123/image.png?type=w773)

* 위 cost는 **cost(W,b)로 나타낼수있으며, 우리가 원하는건 cost가 최소값을 지니는 W,b를 구하는 것이다.**

### How to minimize cost
