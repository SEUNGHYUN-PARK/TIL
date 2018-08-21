Machine Learning & Deep Learning
===================================
SUMMARY
------------------------------------

### CONTENTS
* [Machine learning basic concepts](#machine-learning-basic-concepts)  
  * [Intro](#intro)
  * [예제를 통해 알아보는 Tensorflow의 기본적인 operation](예제를-통해-알아보는-tensorflow의-기본적인-operation)
  * [Everything is Tensor](#everything-is-tensor)
* [Linear regression](#linear-regression)
* [Logistic regression](#logistic-regression)
* [Multivariable linear/logistic regression](#multivariable-linear/logistic-regression)
* [Neural networks](#neural-networks)
* [Deep learning](#deep-learning)
  * [CNN](#cnn)
  * [RNN](#rnn)
  * [Bidirectional Neural networks](#bidirectional-neural-networks)

### Reference
* [Youtube - 모두를 위한 딥러닝 강좌 시즌1](https://www.youtube.com/watch?v=BS6O0zOGX4E&list=PLlMkM4tgfjnLSOjrEJN31gZATbcj_MpUm&index=1)

#### Machine learning basic concepts
##### Intro
* Explicit programming의 한계 -> 많은 규칙
  * 스팸필터
  * 자율주행차
* Supervised vs Unsupervised
  * Supervised Learning
    * 정해져있는 데이터, 레이블들이 정해진 데이터를 가지고 학습을 하는것을 러닝이라함
    * 수많은 데이터들을 통해 입력받은 데이터와 유사도를 점검하고 검사 결과값을 리턴하는 과정
      * Image Labeling
      * Email spam filter
      * Predicting exam score
      * AlphaGo
    * ***Supervised Learning의 종류***
      * **Regression**
        * 범위 내에서 특정값에 대한 예측
      * **Binary Classification**
        * 두 집단중 어느 집단에 가까운지에 대한 예측
      * **Multi-label Classification**
        * 여러 계층 중, 특정 집단에 가까운지에 대한 예측

![감독학습의 정의](http://bigdata-madesimple.com/wp-content/uploads/2018/02/Machine-Learning-Explained1.png)  

  * Unsupervised Learning
    * 정해져있지않은 데이터들을 바탕으로, 기계가 스스로 학습하는 것

##### 예제를 통해 알아보는 Tensorflow의 기본적인 operation
* 설치는 알아서...
* **0) 이해를 위한 참고자료**

![](https://pikanpie.files.wordpress.com/2018/01/screen-shot-2018-01-13-at-9-41-59-pm.png?w=1616)  

* **1) Hello Tensorflow Code**
  ```
  # Create a constant op
  # This op is added as a node to the default graph
  hello = tf.constant("Hello, Tensorflow!")

  # Seart a TF session
  sess = tf.Session();

  # Run the op and get result
  print(sess.run(hello))
  ```
* **Hello Tensorflow 소스 분석**  
***하나의 데이터들의 공간에서 hello(Hello, Tensorflow)라는 tensorflow전용 constant를 생성해주고, sess변수를 통해 tensorflow의 graph를 실행해주고, run을 통해 매개변수로 들어온 hello를 연산해준다.***  
* **2) Computational graph**
  ```
  >>> node1 = tf.constant(3.0,tf.float32)
  >>> node2 = tf.constant(4.0) # tf.float32 implicitly
  >>> node3 = tf.add(node1,node2)
  >>> print(node1)
  Tensor("Const_1:0", shape=(), dtype=float32)
  >>> print(node2)
  Tensor("Const_2:0", shape=(), dtype=float32)
  >>> print(node3)
  Tensor("Add:0", shape=(), dtype=float32)
  >>> sess = tf.Session()
  >>> print(sess.run([node1,node2]))
  [3.0, 4.0]
  >>> print(sess.run(node3))
  7.0
  ```

* **Computational graph 소스분석**
***node1, node2는 그래프에 데이터 생성과 동시에 값을 부여해줬고, 그래프의 각 노드에 대한 정보를 알아보기 위해 프린트를 했다. 보통의 소스코드와는 달리 node3를 정의해줬음에도 불구하고 node3에 대한 값은 0이다. 그리고 Session메소드를 실행하고 텐서에 대해 실행했을때 값이 제대로 나옴을 확인할 수 있었다. 그말은 즉슨, <U>연산에 대한 적용은 Session메소드를 통해서 이뤄진다는 것</U>을 알 수가 있다.***

* **3) Placeholder**
  ```
  a = tf.placeholder(tf.float32)
  b = tf.placeholder(tf.float32)
  adder_node = a + b

  print(sess.run(adder_node,feed_dict = {a:3, b:4.5}))
  print(sess.run(adder_node,feed_dict = {a:[1,3],b:[2,4]}))
  ```
* **Placeholder 소스분석**  
***이전 Computational graph 소스에서는 constant를 선언해주고 각 노드에 대한 데이터를 정의한 후 이들을 바탕으로 데이터연산을 해줬다. 하지만 Placeholder를 통해 그래프 노드를 생성해주면, 값을 초기화하지않아도된다는 장점과 함께, 데이터를 융통성있게 처리할 수 있다는 장점이 있다. 여기서 feed_dict는 각 노드에 대한 데이터값을 설정해주는 부분이라 생각하면된다***  

##### Everything is Tensor  
* 텐서플로우에는 텐서의 흐름이 제일 중요하다  
* 텐서플로우에서의 텐서는 주로 Array를 의미한다  
* Tensor Ranks, Shapes, Types  
  * Ranks(텐서의 차원)  
    * 0 : 일반적인 데이터 하나  
    * 1 : 1차원배열  
    * 2 : 2차원배열  
    * 3 : 3차원배열  
    * N : N차원배열  
  * Shapes(텐서의 데이터의 형태)  
    * 일반적인 컴퓨터 배열과 같은 의미를 지닌다  
    [3,4] -> 4열짜리 데이터가 3개로 이뤄짐을 의미  
  * Types(텐서의 데이터 타입)
    * **tf.float32**
    * **tf.int32**
    * tf.float64
    * tf.int8
    * tf.int16
    * tf.int64

#### Linear regression
#### Logistic regression
#### Multivariable linear/logistic regression
#### Neural networks
#### Deep Learning
