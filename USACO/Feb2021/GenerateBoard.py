

import random
size = random.randint(1, 109)
n = 65536

nums = random.sample(range(1, 65536), size)
k = random.randint(1, len(nums))
print(len(nums), k)
for num in nums:
    print(num)