#!/usr/bin/python3
#dfs

class Solution:
  output = []
  maxN = 0
  def lexicalOrder(self, n):
    self.output = []
    self.maxN = n
    for i in range(1, 10) :
      self.dfs(i)
    return self.output
  def dfs(self, base) :
    if(base > self.maxN) :
      return False
    self.output.append(base)
    carry = base * 10
    if(carry <= self.maxN) :
      self.dfs(carry)

    if(base < 10) :
      return False
    if(base + 1 <= self.maxN and base % 10 != 9) :
      self.dfs(base + 1)

func = Solution().lexicalOrder
print(func(1))
print(func(10))
print(func(50))
print(func(200))
print(func(300))
print(func(3000))
print(func(50000))
print(func(5000000))

