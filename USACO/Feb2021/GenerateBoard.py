

import random
n = 50
x = random.sample([random.randint(0,n / 4) for i in range(n)], n)
y = random.sample([random.randint(0,n / 4) for i in range(n)], n)

print(len(x))
for i, j in zip(x, y):
    print(i, j)


for i, j in zip(x, y):
    print("({}, {})".format(i, j))