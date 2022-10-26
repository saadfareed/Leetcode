class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
        int ans=0;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        while(pq.size()>1){
            int max1=pq.top();
            pq.pop();
            int max2=pq.top();
            pq.pop();
            max1--;
            max2--;
            if(max1>0)pq.push(max1);
            if(max2>0)pq.push(max2);
            ans++;
        }
        return ans;
    }
};
