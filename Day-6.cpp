class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int i=digits.size()-1;
    while(i>=0){
      if(digits[i]!=9)
      {
          digits[i]+=1;
          break;
      }
        if(digits[i]==9 && i!=0)digits[i]=0;
        if(digits[i]==9 && i==0)
        {  
            digits[i]=0;
            digits.push_back(1);
            reverse(digits.begin(),digits.end());
            break;
        }
        i--;
    }
        return digits;
    }
};
