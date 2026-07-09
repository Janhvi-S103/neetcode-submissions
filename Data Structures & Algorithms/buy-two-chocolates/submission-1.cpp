class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int m1=101,m2=101;
        for(int i=0; i < prices.size(); i++)
        {
            if(prices[i] < m1)
            {
                m2=m1;
                m1= prices[i];
            }
            else if(prices[i]<m2){
                m2=prices[i];
            }
        }
        return (money-(m1+m2)) >= 0 ? (money-(m1+m2)): money;
    }
};