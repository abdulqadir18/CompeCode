class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        for(int i=n; i>=0; i--)
        {
            if(i==0 && digits[i]==9)
            {
                digits[i]=0;
                digits.insert(digits.begin(),1);
                return digits;
            }
            if(digits[i]==9)
            {
                digits[i]=0;
            }
            else
            {
                digits[i]++;
                return digits;
            }
        }
        return digits;
    }
};