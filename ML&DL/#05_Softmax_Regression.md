Machine Learning & Deep Learning
===================================
Softmax Regression (Multinomial classification)
------------------------------------

### CONTENTS
* [Intro](#intro)
* [Multinomial Classification](#multinomial-classification)
* [Softmax](#softmax)

### Reference
* [Youtube - 모두를 위한 딥러닝 강좌 시즌1](https://www.youtube.com/watch?v=BS6O0zOGX4E&list=PLlMkM4tgfjnLSOjrEJN31gZATbcj_MpUm&index=1)

### Intro
* 지난시간, logistic regression에 대해서 살펴봤다. 인풋에 대해 아웃풋 값이 다양하게 나오는 Linear regression으로는 binary하게 Classification을 진행할 수 없다. 따라서 이를 0과 1값 사이로 압축시키는 방법이 필요했고, 이는 sigmoid function을 통해 압축시켜줬다.<br></br>
![](https://postfiles.pstatic.net/MjAxODExMDhfOTYg/MDAxNTQxNjQ0NjQ2MDIy.JD6Q7PlCo_N2w8pxK6WV34px-lQ1JxuALDV8iwaVygUg.AWPMrzqHxrUEBBS5ra9OZ2ghFZRaf-tn12BzZGTjzTsg.PNG.npqfr123/image.png?type=w773)

* 이를 그래프 상에서 나타내면 다음과 같다 데이터들이 하나로 군집화 된 모습을 확인할 수 있다.<br></br>
![](https://postfiles.pstatic.net/MjAxODExMDhfMTU2/MDAxNTQxNjQ0NzEyNzMz.PZyoM2P3-cQhpMHnLSJqIAkDrb_YwoH0qCIy2KdVJpYg.rd8X0ttvhtvpo1UCe-8uEojx351mQgliY4vYYTWxjL8g.PNG.npqfr123/image.png?type=w773)

### Multinomial Classification
* 만약에, 아래 그림과 같이 데이터를 두 가지 분류가 아닌 3가지 이상의 군집으로 분류하려고 한다면 어떻게 해야할까.<br></br>
![](https://postfiles.pstatic.net/MjAxODExMDhfMjI0/MDAxNTQxNjQ0Nzk1MDI5.XqQeP5Ts2xI7-7AIGVtOy3o4Vm1Jqtd52Gbe50Qtl8sg.lRvDBtVa7v9Jbb3TJS3wjAJnkZtxzmcpMrLMA1M9xskg.PNG.npqfr123/image.png?type=w773)
* 이 질문에 대한 답은 binary classification을 여러과정에 진행하면된다. 위 예시를 통해 예를 들면 A와 그렇지 않은 집단, B와 그렇지 않은 집단, C와 그렇지 않은집단으로 나눌 수 있다.<br></br>
![](https://postfiles.pstatic.net/MjAxODExMDhfMjg2/MDAxNTQxNjQ0ODE0NzAy.1Wm0sYihXShrseC-EFUodqw9UZd24Eo4_QPSNekT8h0g.G8R-nSygKqeIHx476M9NOGriOzEHwKtRbRX3upR0V5kg.PNG.npqfr123/image.png?type=w773)
* 그렇게 분류를 하고나면 XW를 구해주면된다<br></br>
![](https://postfiles.pstatic.net/MjAxODExMDhfMjk3/MDAxNTQxNjQ1NDU4MDY3.u-_iqwD3jjwsnrlbodqEujVLhOpqGEUMbnmZCUy96lsg.5Vg-pOlaz_9Nsc9sZgGHyTTudfmKIQYCvEa5KkBwW2cg.PNG.npqfr123/image.png?type=w773)
* 하지만 이를 연산하기에는 너무 복잡하다. 따라서 하나의 행렬로 만들어 주고 연산해주는 방법을 생각할 수 있다.<br></br>
![](https://postfiles.pstatic.net/MjAxODExMDhfMTcg/MDAxNTQxNjQ1NDc3NDMx.SNYtmgMXJQLy9dnFY2ZyFYLFGZ-pa7kd2V8ojkUPMckg.1xClsSHLDSrwXjn_HbdGlLbFeDytuLoegOi8Jrf2dGcg.PNG.npqfr123/image.png?type=w773)


### Softmax
* 이를 적용해서 나온 값이 아래 그림과 같다고 하자.<br></br>
![](https://postfiles.pstatic.net/MjAxODExMDhfNjEg/MDAxNTQxNjUwNTI3OTky.xWcLyDyNIOuhlVDyvBdBUqjXXkqzSv-BCDnZnHWABtgg._jBI0L13rJnZurczpG8p8P2K5lyDM-O2_4iKRz6keKUg.PNG.npqfr123/image.png?type=w773)

* 이 값은 단순히 WX값이고 우리는 이를 0~1사이의 값으로 바꿔줘야한다. 하지만 여기서는 sigmoid를 적용하는게 아니라 softmax로 바꿔준다. softmax로 바꿔주면 모든 도메인들의 변환된 값의 합이 1이 되기때문에 sigmoid가 아니라 softmax를 이용한다. 이 변환 된 값들은 하나의 확률로 해석할 수 있다.<br></br>
![](https://postfiles.pstatic.net/MjAxODExMDhfMjg3/MDAxNTQxNjUwNjEzNjg2.6UNdx1mvypQLLixDJNDzV8R08h4tAD0QFHOA_Mfdnmcg.Ds9s7ex-ZL9MjPx1iZyJK56SEpt0sfM0cdJLn-7wvdsg.PNG.npqfr123/image.png?type=w773)

* 제일 높은 확률값만 1로 설정하고 나머지는 0으로 설정하는 방법을 one hot encoding이라한다.<br></br>
![](https://postfiles.pstatic.net/MjAxODExMDhfMTUw/MDAxNTQxNjUwNjM3MjA1.CZYbl7GvcUg4Vj6DjzsCvZetn_K1jChtsF8memBOtYwg.uM6TlN31t5LEtDkLYwOeHncq9_U62OhUe6TSLx7eEr4g.PNG.npqfr123/image.png?type=w773)

* one hot encoding을 통해 나온 값과 기존의 값을 활용하여 cost function을 구할 수 있다 multinomial classification에서는 크로스 엔트로피를 활용한다<br></br>
![](https://postfiles.pstatic.net/MjAxODExMDhfNzEg/MDAxNTQxNjUwNjcyNzM4.Ap7zMSEiYsGJRIwzwXgtkoXQnqJsPQ8tCb1tuiyILIQg.pIfFgHL4_NJR2ugrd0NfJHhNKPdloXC8SkLoNVRvYBIg.PNG.npqfr123/image.png?type=w773)<br></br>
![](https://postfiles.pstatic.net/MjAxODExMDhfMjI3/MDAxNTQxNjUwNjk2Mzky.X0CWT6Dv10Ng2jcuSwKqKNKkp-6af8JyY97OEkxkTkog.h1RX7ol6hLtwucD2h9k50FlsVXYS2awk03WRS_IGVPIg.PNG.npqfr123/image.png?type=w773)

* 크로스 엔트로피를 활용하면 다음 두 사진과 같은 결과가 나온다. 데이터가 일치된 경우 cost값이 0이기때문에 시스템에 문제가 생기지않지만, 만약 다른데이터일경우 시스템에 문제가 생기게된다.
![](https://postfiles.pstatic.net/MjAxODExMDhfMTMw/MDAxNTQxNjUwNzA4Mzgx.NcvdXyHpOQ--dfKbCvP0iTlSAezi7Ya6zdBwHHPIzyEg.8LEN61chTtgegldGbdTfyZRyZc_9xDdoR0gvGH_NVdYg.PNG.npqfr123/image.png?type=w773)
![](https://postfiles.pstatic.net/MjAxODExMDhfMTQ1/MDAxNTQxNjUwNzIwNjY3.OlfMlAgP82FbZT4WLhrpreACTIjGj43vbW5KM1qt53Ig.5z4J8xo_Y_LiyI1AUcj3210CeLFESJr3xwn-KY8Xud4g.PNG.npqfr123/image.png?type=w773)

* Loss는 전체 차이의 합을 통해서 갯수로 나눠주고 평균을 내주면된다. 또한 같은 방법으로 gradient decent를 적용시키면 최소코스트를 구할 수 있다.<br></br>
![](https://postfiles.pstatic.net/MjAxODExMDhfMTYy/MDAxNTQxNjUwNzQxNTA5.CQBjc_mpvOOzbaF5Hy23Cy9Yx9wFT0hrHgS7tdUPvNsg.HF-LR5MWmyk4jJ7F3yNXVBjZ6BsucOC9mm_qG2DpW78g.PNG.npqfr123/image.png?type=w773)

* cost를 구하는 과정에서 cross entropy를 써야한다 근데 logistic cost 랑 cross entropy랑 같은 계산결과가 나온다
