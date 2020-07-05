class Solution {
public:
    int hammingDistance(int x, int y) {
        int a= x^y;
       // cout<<a<<endl;
        if(a==0) return 0;
        int count=0;
        while(a>0)
        {
           // cout<<a<<endl;
            if(a&1) count++;
            a=a>>1;
        }
        return count;
    }
};
