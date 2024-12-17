// ----------------------------LEETCODE:121--------------
// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

// Example 1:

// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.
 

// Constraints:

// 1 <= prices.length <= 105
// 0 <= prices[i] <= 104



class Solution {
public:
    // Recursive function to find the maximum profit
    void maxProfitFinder(vector<int>& prices, int i, int& minPrice, int& maxProfit){
        // BASE CASE: If we've processed all prices
        if(i == prices.size())
            return;
        
        // SOLVE ONE CASE: Update minPrice if the current price is lower
        if(prices[i] < minPrice)
            minPrice = prices[i];

        // Calculate today's profit if sold at the current price
        int todaysProfit = prices[i] - minPrice;
        // Update maxProfit if today's profit is higher
        if(todaysProfit > maxProfit)
            maxProfit = todaysProfit;

        // RECURSIVELY call the function for the next day
        maxProfitFinder(prices, i+1, minPrice, maxProfit);
    }

    // Function to initialize variables and start the recursive process
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX; // Initialize minPrice to a very high value
        int maxProfit = INT_MIN; // Initialize maxProfit to a very low value
        maxProfitFinder(prices, 0, minPrice, maxProfit); // Start the recursion from day 0
        return maxProfit; // Return the maximum profit found
    }
};



// Time Complexity (TC):
// Single Pass Through Prices: The function maxProfitFinder makes a single pass through the prices list, processing each element exactly once.

// Each Step: Each step involves constant-time operations (comparisons and arithmetic).

// Thus, the time complexity is 𝑂(𝑁), where 𝑁 is the length of the prices list.

// Space Complexity (SC):
// Call Stack: The function is recursive, and in the worst case, the recursion depth can reach 
// 𝑁, corresponding to the length of the prices list.

// Variables: The additional variables (minPrice and maxProfit) use a constant amount of space.

// Thus, the space complexity is 𝑂(𝑁) due to the maximum depth of the recursive call stack.

// Summary:
// Time Complexity (TC): 𝑂(𝑁)
// Space Complexity (SC): 𝑂(𝑁)