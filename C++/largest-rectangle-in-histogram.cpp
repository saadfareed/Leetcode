// Name: Sumit Chakraborty

// Username: chakraborty9569

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int max_area=0;
        int tp;
        int area_with_tp;
        int i=0;
        while(i<heights.size())
        {
            if(s.empty()||heights[s.top()]<=heights[i])
                s.push(i++);
            else
            {
                tp=s.top();
                s.pop();
                area_with_tp=heights[tp]*(s.empty()? i : i-s.top()-1);
                if(max_area<area_with_tp)
                    max_area=area_with_tp;
            }
        }
        while(!s.empty())
        {
            tp=s.top();
            s.pop();
            area_with_tp=heights[tp]*(s.empty()? i : i-s.top()-1);
            if(max_area<area_with_tp)
                max_area=area_with_tp;
        }
        return max_area;
    }
};