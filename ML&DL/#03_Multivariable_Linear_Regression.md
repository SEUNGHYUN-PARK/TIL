Machine Learning & Deep Learning
===================================
Multivariable_Linear_Regression
------------------------------------

### CONTENTS
* [Intro](#Intro)
* [Multivariable Linear Regression](#multivarable-linear-regression)  
* [Multivariable Linear Regression의 H(x)](#multivariable-linear-regression의-h(x))
* [Matrix](#matrix)

### Reference
* [Youtube - 모두를 위한 딥러닝 강좌 시즌1](https://www.youtube.com/watch?v=BS6O0zOGX4E&list=PLlMkM4tgfjnLSOjrEJN31gZATbcj_MpUm&index=1)

### Intro
* 이전에 배운 Linear-Regression을 구현하기 위해선 3가지 요소가 필요했다
  * Hypothesis, Cost function, Gradient descent algorithm
  * Hypothesis
    * 가설, 우리가 어떻게 예측할 것인지 미리 선정하는 요소
    * Linear Regression 에선 H(x)=Wx+b로 선정했다
  * Cost function
    * cost는 가설과 실제 데이터와의 차이의 제곱을 의미한다 => (H(x)-y)^2
    * 가설과 실제 데이터의 유사도를 판단하는 조건
    * 0에 가까울수록 H(x)가 실제 데이터와 유사하다
    * cost function = **(Σcost) / 데이터의 갯수** 만큼 나눠주면된다.
  * Gradient descent algorithm
    * cost(W,b)의 최소값을 찾는 알고리즘
    * W := W-(learning_rate) * 미분(cost(W,b))

### Multivariable Linear Regression
* 고교시절, 수 많은 사람들의 각각의 점수를 바탕으로, 각과목별로 등급을 예측할수 있었다.(Linear Regression) 하지만, 한종류의 데이터만으로 하나의 결과를 도출해내는 결과 데이터는 얼마 없다.
세상의 모든 결과들은 여러 요소로부터 도출된다.
대표적으로 학점을 예로 들 수 있다. 학점을 산출할 때, 중간 기말고사 와 같은 정기고사에, 프로젝트, 실습점수까지, 하나의 학점이 도출되는데는 여러 요소들이 작용한다.
***이처럼, 다양한 종류의 input값에 따라 하나의 결과 데이터를 도출하는 그래프에서 적용되는 Linear_Regression을 Multivariable Linear Regression이라한다.***

![이러한 상황들이 현실엔 무수히 많다](https://blogfiles.pstatic.net/MjAxODA4MjZfMTk5/MDAxNTM1Mjc3OTM2Mzc1.OMxjUWSxHuxhq9rYElkhe3ohXGdLbFljikiTuwed2UYg.1fV_fw8lGuE_zNhtYx4lgUfQB3sKnJRL5jhojLkVvakg.PNG.npqfr123/image.png?type=w1)

### Multivariable Linear Regression의 H(x)
* 기존의 Linear Regression에서의 H(x)는 다음과 같다.
H(x)=Wx+b
인풋데이터들에 weight를 곱해주고 추가적인 bias를 더해줘 H(x)를 구해줬다. 생가각을 확장해, 여러 데이터 종류가 입력되면 그 데이터들에 각각의 가중치를 곱해주고, bias를 더해주면 된다.

![Multivariable_Linear_Regression의 H(x) ](https://blogfiles.pstatic.net/MjAxODA4MjZfODAg/MDAxNTM1Mjg1NTU0MjQw.kfWX_S1GmY6g2Wnk30ZU2IZwvcZjgNJNme240zR6vt0g.MHfNdWbWFx1fBesDh0RHzZe9FpZCbAUf3ICigUmwfkAg.PNG.npqfr123/image.png?type=w1)

 * 또한 Cost function구하는 식도 기존의 단항 cost function의 식과 유사한 방법으로 구한다

![](https://blogfiles.pstatic.net/MjAxODA4MjZfMjMz/MDAxNTM1Mjg1NjM1MDI1.BNRcsOWIzWumghzzPYoV-kzs_CQNA519L6audie6iJ4g.X_oss52Tav9jDVKpB6-nYhCpAtwXWKK9Nsd8IffzzMIg.PNG.npqfr123/image.png?type=w1)

### Matrix
* 다항 Linear regression의 H(x)식을 일일히 나열하기가 쉽지않다. 이를 해결하는 방법이 바로 행렬이다. 행렬을 이용하면, weight들과 데이터를 하나의 행렬로 묶어둘 수 있다는 장점이있다.

![](https://blogfiles.pstatic.net/MjAxODA4MjZfMjQ1/MDAxNTM1Mjg3NDQzMDMw.x6DdQrgr8-9Of1f7hrU_Q4qDARkSeuZ2XXga5QiAn-8g.2kD3vkYdTicQothe70l05FUwxLJey7tWd0kabZ7JGMQg.PNG.npqfr123/image.png?type=w1)

* 행렬은 곱하는 순서에 따라 값이 변하게되어있는데 기존 w, x순이었던 식이 바뀌어서 작성해도 똑같은 행렬식이기때문에 H(x)=XW라 표현할 수 있다. 이는 행렬의 성질을 그대로 적용할 수 있다.
[m,n] * [n,k] = [m,k]
n개의 데이터가 m개의 인스턴스로 구성되있고, [n,k]에 해당하는 W를 값을 행렬곱해주면, m,k개의 H(x)가 생성된다.
