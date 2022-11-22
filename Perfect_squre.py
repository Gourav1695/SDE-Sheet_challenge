class Solution:
    def numSquares(self, n: int) -> int:

        i=1
        while i*i <= n:                             # case k = 1
            if i*i == n: return 1                   
            i+=1          

        def CheckTwo(c):                            # case k = 2 
            while c%2==0: c=c//2
            while c%5==0: c=c//5
            while c%9==0: c=c//9

            if c%3==0: return False

            if c in (0,1,13,17): return True

            i, j = 0, int(c**.5)

            while i <= j:
                if i*i + j*j == c: return True
                if i*i + j*j < c: i += 1
                if i*i + j*j > c: j -= 1

            return  False

        if CheckTwo(n): return 2

        while not n%4: n//=4                        # case k = 3  
        if n%8 != 7: return 3 
        
        return 4                                    # case k = 4
