class Solution {
public:
    string largestOddNumber(string num) {
        // int n=num.length();
        // for(int i=n-1;i>=0;i--)
        // {
        //     if((num[i]-'0') %2 != 0)   // convert char to integer 
        //     {
        //         return num.substr(0,i+1);   // return length of running string 
        //     }
        // }

        // return "";
        int i = num.size();
        while(i--){
            if (num[i] == '1' ||num[i] == '3' ||num[i] == '5' ||num[i] == '7' ||num[i] == '9' ){
                return num.substr(0, i+1);
            }
        }
        return "";
    }
};