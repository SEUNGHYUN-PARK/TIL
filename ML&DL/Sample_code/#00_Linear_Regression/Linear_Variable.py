import tensorflow as tf

x_train = [1,2,3]
y_train = [1,2,3]

W = tf.Variable(tf.random_normal([1]), name = 'weight') #텐서플로의 그래프 노드
b = tf.Variable(tf.random_normal([1]), name = 'bias') # 텐서플로의 그래프 노드
'''
.Variable은 텐서플로우가 변경시키는 변수를 의미한다
학습을 하는 과정에서 바뀌는 값이다.

값이 하나인 일차원 Array를 생성
'''


hypothesis = x_train * W + b # H(x)연산 H(x) = Wx+b

#cost/Loss function
cost = tf.reduce_mean(tf.square(hypothesis-y_train))

'''
reduce_mean : 평균 내주는 기능을 담당

'''

optimizer = tf.train.GradientDescentOptimizer(learning_rate=0.01)
train = optimizer.minimize(cost)

'''
이 단계에선 위 과정을 매직이라 생각하자
cost값을 미니마이즈해서 최적화된 W,b를 찾아낸다.
'''

sess = tf.Session()
sess.run(tf.global_variables_initializer())

'''
.Variable을 쓸거면, global_variables_initializer()를 써서 초기화시켜줘야한다
'''

for step in range(2001):
    sess.run(train)
    if step%20==0:
        print(step,sess.run(cost),sess.run(W),sess.run(b))