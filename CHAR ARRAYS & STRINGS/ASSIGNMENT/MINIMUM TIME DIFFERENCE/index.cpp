// LEETCODE--539

// Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.
 

// Example 1:

// Input: timePoints = ["23:59","00:00"]
// Output: 1
// Example 2:

// Input: timePoints = ["00:00","23:59","00:00"]
// Output: 0
 

// Constraints:

// 2 <= timePoints.length <= 2 * 104
// timePoints[i] is in the format "HH:MM".



class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // STEP 1: CONVERT TIME STRING INTO MINUTES INTEGER VALUE
        vector<int> timeInMinutes;  // Create a vector to store total minutes for each time point
        
        // Loop through each time string in the input vector
        for(int i=0; i<timePoints.size(); i++){
            string curr = timePoints[i];  // Get the current time string
            int hours = stoi(curr.substr(0,2));  // Extract the hours part and convert to an integer
            int mins = stoi(curr.substr(3,2));  // Extract the minutes part and convert to an integer
            int totalMinutes = hours*60 + mins;  // Calculate the total minutes
            timeInMinutes.push_back(totalMinutes);  // Store the total minutes in the vector
        }

        // STEP 2: SORT
        sort(timeInMinutes.begin(), timeInMinutes.end());  // Sort the vector of total minutes

        // STEP 3: DIFFERENCE AND CALCULATE MIN DIFFERENCE
        int mini = INT_MAX;  // Initialize the minimum difference with a very large value
        int n = timeInMinutes.size();  // Store the size of the vector

        // Loop through the vector (except the last element)
        for(int i=0; i<n-1; i++){
            int diff = timeInMinutes[i+1] - timeInMinutes[i];  // Calculate the difference between consecutive elements
            mini = min(mini, diff);  // Update the minimum difference if the current difference is smaller
        }

        // HANDLE CIRCULAR TIME DIFFERENCE
        // Calculate the difference between the first and last elements, considering the circular nature of the clock
        int lastDiff1 = (timeInMinutes[0]+1440) - timeInMinutes[n-1];
        // Find the minimum of the two calculated differences
        int lastDiff = min(mini, lastDiff1);
        // Update the minimum difference if the circular difference is smaller
        mini = min(mini, lastDiff);
        
        return mini;  // Return the smallest difference
    }
};
