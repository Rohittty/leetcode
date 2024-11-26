class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        k=pow(-2,31)
        g=pow(2,31)-1
        
        a=1;
        if x<0:
            a=-1
            x=x*-1
        
        rev=0
        while x>0:
            rem=x%10
            rev=(rev*10)+rem
            x=x/10
            if rev*a<k or rev*a>g:
                return 0
        return rev*a
        