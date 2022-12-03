class Solution:
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        d = {}
        for char in s:
            d[char] = d.get(char,0) + 1
        
        sortedList = sorted(d.items(), key = lambda x:x[1])[::-1]
        res = ''
        
        for tupleEle in sortedList:
            res = res+tupleEle[0]*tupleEle[1]
        return res
