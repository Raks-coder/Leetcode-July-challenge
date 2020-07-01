//QUESTION:

/*

You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.

Given n, find the total number of full staircase rows that can be formed.

n is a non-negative integer and fits within the range of a 32-bit signed integer.


*/


//SOLUTION: 


class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        int subfactor=1;
        while(n>0)
        {
            n=n-subfactor;
            subfactor++;
            if(n>=0)count++;
        }
        return count;
        
    }
};
