/*
 * Problem #85: Maximal Rectangle
 * Difficulty: Hard
 * Submission: Try 1
 * status: Accepted
 * Language: cpp
 * Date: 21/01/2026, 23:19:07
 * Link: https://leetcode.com/problems/maximal-rectangle/
 */

class Solution {

private:
int largestRectangleArea(vector<int> &heights){
    int n = heights.size();
    stack<int> st;

    int largestArea= 0;

    int area = 0;
    int nse,pse;

    for(int i = 0;i<n;i++){
        while(!st.empty() && heights[st.top()] >= heights[i]){
            int ind = st.top();
            st.pop();
            pse = st.empty() ? -1 :st.top();
            nse =i;
            area = heights[ind] * (nse-pse-1);
            largestArea = max(largestArea,area);
        }
        st.push(i);
    }
    while(!st.empty()){
        nse = n;
        int ind = st.top();
        st.pop();
        pse = st.empty()?-1 : st.top();

        area=heights[ind] * (nse-pse-1);
        largestArea = max(largestArea,area);
    }
    return largestArea;
}



public:
    int maximalRectangle(vector<vector<char>>& matrix)
{
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> prefixSum(n,vector<int>(m));

        for(int j =0;j<m;j++){
            int sum = 0;
            for(int i = 0;i<n;i++){
                if (matrix[i][j] == '1') {
            sum += 1;
        } else {
            sum = 0;
        }
        prefixSum[i][j] = sum;
    }
}
    int maxArea = 0;
    for(int i = 0;i<n;i++){
        int area =largestRectangleArea(prefixSum[i]);
        
        maxArea = max(area,maxArea);
    }
    return maxArea;
}
};
