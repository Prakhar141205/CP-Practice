/*The main logic in this question is that 
after sorting we just need to compare the first and the last string of the 
given string of vector
*/


//  Approach 1:

class Solution {  // O(nlogn + x) == O(logn * n)  n =  length of the vector
public:  
    string longestCommonPrefix(vector<string>& strs) {
        int n  = strs.size();
        sort(strs.begin(), strs.end());  // O(nlogn)
        // after sorting we only need to compare the first and the last string

        int x = strs[n-1].size();  // last string
        int y = strs[0].size();   // first string

        string ans = "";
        int i=0;
        while(i < x && i < y){ // O(x)
            if(strs[n-1][i] != strs[0][i]){ // compare each characters of the string
                return ans;
            }else{
                ans += strs[n-1][i];
            }
            i++;
        }

        
        return ans;
    }
};




//  Approach 2:

