'''
대용량의 빅 데이터를 코드로 구현하는데는 제한이 있고, 보통의 데이터는
하나의 파일로 구성되어있다(보통 .csv)
따라서 현업에는 파일을 불러와서 처리를한다.
'''

import numpy as np

xy = np.loadtxt('data-01-test-score.csv',delimiter=',',dtype=np.float32)
x_data=xy[:,0:-1] # data slicing : 매 행 0번 인덱스부터 말전까지
y_data=xy[:,[-1]] # data slicing : 마지막 인덱스만

print("X : ",x_data.shape,"\n",x_data,"\n","X_data's length : ",len(x_data))
print("Y : ",y_data.shape,"\n",y_data,"\n","Y_data's length : ",len(y_data))
