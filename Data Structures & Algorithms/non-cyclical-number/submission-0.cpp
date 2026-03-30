class Solution {
public:
    bool isHappy(int n) {
         vector<int> happy;
        happy.push_back(n);
        while ((find(happy.begin(), happy.end(), 1) == happy.end())) {
            int n1 = n;
            int sum = 0;
            while (n1 != 0) {
                int r = n1 % 10;
                sum = sum + r * r;
                n1 = n1 / 10;
            }
            if((find(happy.begin(), happy.end(), sum) != happy.end()))
                return false;
            happy.push_back(sum);
            n = sum;
        }
        if (std::find(happy.begin(), happy.end(), 1) != happy.end()) {
            return true;
        }
        return false;
    }
};
