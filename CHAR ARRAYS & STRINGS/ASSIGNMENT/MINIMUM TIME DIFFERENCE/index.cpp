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
        vector<int> minutes;
        for(int i=0; i<timePoints.size(); i++){
            string curr = timePoints[i];
            int hours = stoi(curr.substr(0,2));
            int mins = stoi(curr.substr(3,2));
            int totalMinutes = hours*60 + mins;
            minutes.push_back(totalMinutes);
        }

        // STEP 2: SORT
        sort(minutes.begin(), minutes.end());

        // STEP 3: DIFFERENCE AND CALCULATE MIN DIFFERENCE
        int mini = INT_MAX;
        int n = minutes.size();

        for(int i=0; i<n-1; i++){
            int diff = minutes[i+1] - minutes[i];
            mini = min( mini, diff );
        }

        // SOMETHING MISSING, NOW THIS IS THE GAME
        int lastDiff1 = (minutes[0]+1440)- minutes[n-1];
        int lastDiff2 = minutes[n-1] - minutes[0];
        int lastDiff = min(lastDiff1, lastDiff2);
        mini = min( mini, lastDiff );
        return mini;
    }
};