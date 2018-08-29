class Solution:
  def lexicalOrder(self, n):
    length = len(str(n))
    num = ['1', '0', '0', '0', '0', '0', '0']
    nLen = 1
    nLocate = 0
    output = [] 
    while (ord(num[0]) < 58) :
      getNum = self.str2int(num[0:nLen])
      if(n >= getNum) :
        output.append(getNum)
      if(nLen < length) :
        nLen += 1
        nLocate += 1
        continue
      if(nLen == length) :
        num[nLocate] = chr(ord(num[nLocate]) + 1)
        for i in [6, 5, 4, 3, 2, 1] :
          if(ord(num[i]) >= 58) :
            num[i] = '0'
            nLen -= 1
            nLocate -= 1
            num[i - 1] = chr(ord(num[i - 1]) + 1)
    return output
  def str2int(self, sList) :
    num = 0
    for c in sList :
      num *= 10
      num += int(c)
    return num
