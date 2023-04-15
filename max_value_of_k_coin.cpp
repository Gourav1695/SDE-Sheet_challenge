    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        vector<int> mv(k + 1), pileSum(k + 1);
        for (auto pile : piles) { // Iterate over each pile
            int n = min(k, (int)pile.size()); // Calculate the number of coins in the pile to consider
            int sum = 0;
            for (int i = 1; i <= n; i++)
                pileSum[i] = sum += pile[i - 1]; // Calculate the sum of coins taken from the pile for each possible number of coins
            for (int i = k; i > 0; i--) { // Iterate over each possible number of coins
                int maxVal = 0;
                for (int j = min(i, n); j >= 0; j--) // Iterate over each possible number of coins taken from the current pile
                    maxVal = max(maxVal, pileSum[j] + mv[i - j]); // Update the maximum total value of coins
                mv[i] = maxVal;
            }
        }
        return mv[k]; // Return the maximum total value of coins we can have in our wallet if we choose at most k coins from all the piles
    }
