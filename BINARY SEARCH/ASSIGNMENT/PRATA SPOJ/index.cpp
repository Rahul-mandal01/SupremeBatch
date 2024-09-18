// -------------------------PRATA - Roti Prata SPOJ (SPHERE ONLINE JUDGE)-----------------------
// no tags 

// IEEE is having its AGM next week and the president wants to serve cheese prata after the meeting. The subcommittee members are asked to go to food connection and get P (P<=1000) pratas packed for the function. The stall has L cooks (L<=50) and each cook has a rank R (1<=R<=8). A cook with a rank R can cook 1 prata in the first R minutes 1 more prata in the next 2R minutes, 1 more prata in 3R minutes and so on (he can only cook a complete prata) (For example if a cook is ranked 2, he will cook one prata in 2 minutes one more prata in the next 4 mins an one more in the next 6 minutes hence in total 12 minutes he cooks 3 pratas in 13 minutes also he can cook only 3 pratas as he does not have enough time for the 4th prata). The webmaster wants to know the minimum time to get the order done. Please write a program to help him out.

// Input
// The first line tells the number of test cases. Each test case consist of 2 lines. In the first line of the test case we have P the number of prata ordered. In the next line the first integer denotes the number of cooks L and L integers follow in the same line each denoting the rank of a cook.

// Output
// Print an integer which tells the number of minutes needed to get the order done.

// Example
// Input:
// 3
// 10
// 4 1 2 3 4
// 8
// 1 1
// 8
// 8 1 1 1 1 1 1 1 1

// Output:
// 12
// 36
// 1


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSolution(vector<int> cooksRanks, int nP, int mid){
    int currP = 0;          //initial cooked prata count
    for(int i=0; i<cooksRanks.size(); i++){
        int R = cooksRanks[i], j=1;
        int timeTaken = 0;
        while(true){
            if(timeTaken + j * R <= mid){
                ++currP;
                timeTaken += j*R;
                ++j;          //for eg. 1R, 2R,3R etc...
            }
            else{
                break;
            }
        }
        if(currP >= nP){
            return true;
        }
    }
    return false;

}

int minTimeToCompleteOrder(vector<int> cooksRanks, int nP){
    int start = 0;
    int highestRank = *max_element(cooksRanks.begin(),cooksRanks.end());
    int end = highestRank * (nP * (nP + 1)/2);
    int ans = -1;

    while(start <= end){
        int mid = (start + end) >> 1;
        if(isPossibleSolution(cooksRanks, nP, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
     int T; cin >> T;       // TEST CASE
     while(T--){
        int nP, nC;         //nP= no. of prata, nC= no. of cooks
        cin >> nP >> nC;
        vector<int> cooksRanks;
        while(nC--){
            int R; cin>> R; //individual Ranks of cooks
            cooksRanks.push_back(R);
        }
        cout<< minTimeToCompleteOrder(cooksRanks, nP) <<endl;
     }
        return 0;
}
