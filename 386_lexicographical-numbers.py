#!/usr/bin/python3

class Solution:
  def lexicalOrder(self, n):
    output = []
    number = 1
    for i in range(n) :
      output.append(number)
      if(number * 10 <= n) :
        number *= 10
      elif(number % 10 != 9 and (number + 1) <= n) :
        number += 1 
      else :
        if((number + 1) > n) : 
          number = int(number / 10)
        while(number % 10 == 9) :
          number = int((number - 9) / 10)
        number += 1
    return output

func = Solution().lexicalOrder
print(func(1))
print(func(34))
print(func(50))
print(func(200))
print(func(300))
print(func(3000))
print(func(50000))
print(func(5000000))

