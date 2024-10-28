class Solution {
    public boolean isPalindrome(int x) {
         Long count = new Long(0);
        int duplicate= x;;
        while(x>0){
           int lastdigit= x%10;
            count=(count*10)+lastdigit;
            x=x/10;
        }
        return(duplicate==count);
    }
}