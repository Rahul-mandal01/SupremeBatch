//  LEETCODE:: 983 -- MEDIUM LEVEL --

// You have planned some train traveling one year in advance. The days of the year in which you will travel are given as an integer array days. Each day is an integer from 1 to 365.

// Train tickets are sold in three different ways:

// a 1-day pass is sold for costs[0] dollars,
// a 7-day pass is sold for costs[1] dollars, and
// a 30-day pass is sold for costs[2] dollars.
// The passes allow that many days of consecutive travel.

// For example, if we get a 7-day pass on day 2, then we can travel for 7 days: 2, 3, 4, 5, 6, 7, and 8.
// Return the minimum number of dollars you need to travel every day in the given list of days.



// Example 1:

// Input: days = [1,4,6,7,8,20], costs = [2,7,15]
// Output: 11
// Explanation: For example, here is one way to buy passes that lets you travel your travel plan:
// On day 1, you bought a 1-day pass for costs[0] = $2, which covered day 1.
// On day 3, you bought a 7-day pass for costs[1] = $7, which covered days 3, 4, ..., 9.
// On day 20, you bought a 1-day pass for costs[0] = $2, which covered day 20.
// In total, you spent $11 and covered all the days of your travel.
// Example 2:

// Input: days = [1,2,3,4,5,6,7,8,9,10,30,31], costs = [2,7,15]
// Output: 17
// Explanation: For example, here is one way to buy passes that lets you travel your travel plan:
// On day 1, you bought a 30-day pass for costs[2] = $15 which covered days 1, 2, ..., 30.
// On day 31, you bought a 1-day pass for costs[0] = $2 which covered day 31.
// In total, you spent $17 and covered all the days of your travel.
 

// Constraints:

// 1 <= days.length <= 365
// 1 <= days[i] <= 365
// days is in strictly increasing order.
// costs.length == 3
// 1 <= costs[i] <= 1000

// SOLUTION:

class Solution {
public:
    // Helper function to find the minimum cost of tickets
    int mincostTickets_helper(vector<int>& days, vector<int>& costs, int i){
        // BASE CASE
        if(i >= days.size())
            return 0; // If all days are covered, no cost is needed
        
        // SOLUTION FOR A CASE

        // 1 DAY PASS TAKEN
        int cost1 = costs[0] + mincostTickets_helper(days, costs, i+1);

        // 7 DAYS PASS TAKEN
        int passEndDay = days[i] + 7 - 1; // Calculate the end day for the 7-day pass
        int j = i;
        while(j < days.size() && days[j] <= passEndDay){
            j++; // Move to the next day that is not covered by the 7-day pass
        }
        int cost7 = costs[1] + mincostTickets_helper(days, costs, j);

        // 30 DAYS PASS TAKEN
        passEndDay = days[i] + 30 - 1; // Calculate the end day for the 30-day pass
        j = i;
        while(j < days.size() && days[j] <= passEndDay){
            j++; // Move to the next day that is not covered by the 30-day pass
        }
        int cost30 = costs[2] + mincostTickets_helper(days, costs, j);

        // Return the minimum cost among the three options
        return min(cost1, min(cost7, cost30));
    }

    // Main function to initiate the process
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return mincostTickets_helper(days, costs, 0); // Start from the first day
    }
};



// Time Complexity (TC)
// The time complexity of the mincostTickets_helper function is O(3^N), where N is the number of days in the days vector. This is because, for each day, the function makes three recursive calls (one for each type of pass), leading to an exponential number of recursive calls.

// Space Complexity (SC)
// The space complexity of the mincostTickets_helper function is O(N), where N is the number of days in the days vector. This is due to the maximum depth of the recursion stack, which can be equal to the number of days in the worst case.

// Summary
// Time Complexity: O(3^N)
// Space Complexity: O(N)