class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        // sort(costs.begin(),costs.end());
        // int tot =0;
        // for(int i = 0; i < costs.size(); i++) {
        //     if(coins >= costs[i]) {
        //         coins -= costs[i];
        //         tot++;
        //     } else {
        //         break;
        //     }
        // }
        // return tot;

        int maxCost = 0;

       
        for(int cost : costs) {
            maxCost = max(maxCost, cost);
        }

       
        vector<int> freq(maxCost + 1, 0);

        for(int cost : costs) {
            freq[cost]++;
        }

        int total = 0;

       
        for(int cost = 1; cost <= maxCost; cost++) {
            while(freq[cost] > 0 && coins >= cost) {
                coins -= cost;
                freq[cost]--;
                total++;
            }
        }

        return total;

    }
};