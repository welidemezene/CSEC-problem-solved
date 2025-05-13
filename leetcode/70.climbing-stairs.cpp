/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
       if(n==1) return 1;
       if(n==2) return 2;
       int prev1 = 1, prev2 = 2 , curr;
       for(int i =3; i<=n; i++){
        curr = prev1+prev2;
        prev1 = prev2;
        prev2 = curr;
       }
       return curr;
}

        
    
};
// @lc code=end

