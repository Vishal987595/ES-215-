import timeit
import time
import numpy as np

n = 32

# start = time.time()

Q = np.random.randint(0,1023,(n,n))
P = np.random.randint(0,1023,(n,n))
R = [[0 for x in range(n)] for y in range(n)]
startc = time.process_time()
for i in range(n):
    for j in range(n):
        for k in range(n):
           R[i][j] = R[i][j] + Q[i][k] * P[k][j]

endc = time.process_time()
# end = time.time()

print(f"Meat Portion Runtime with matrix size {n} is: {endc-startc}")
# print(f"Total Runtime with matrix size {n} is: {end-start}")
