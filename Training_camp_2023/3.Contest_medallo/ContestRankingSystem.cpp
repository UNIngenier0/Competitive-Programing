/*
 * Problem A: Contest Ranking System
 * 
 * Implement a contest ranking system where teams are ranked by:
 * 1. Number of problems solved (descending)
 * 2. Penalty time (ascending) as tiebreaker
 * 
 * Solution: Sort teams by problems solved (desc) then penalty (asc),
 * count teams with same score as the k-th place team
 */

#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for (int i =a; i<b; i++)

// Comparison function for sorting teams
// First by problems solved (descending), then by penalty (ascending)
bool compareTeams(vector<int> team1, vector<int> team2){
    if (team1[0] == team2[0]){
        return team1[1] < team2[1]; // Lower penalty wins in tie
    } else {
        return team1[0] > team2[0]; // More problems solved wins
    }
}

int main(){
    int teams, place;
    cin >> teams >> place;
    
    vector<vector<int>> scores;
    
    // Read team scores
    f(i,0,teams){
        int problems, penalty;
        cin >> problems >> penalty;
        vector<int> teamScore = {problems, penalty};
        scores.push_back(teamScore);
    }
    
    // Sort teams by ranking criteria
    sort(scores.begin(), scores.end(), compareTeams);
    
    // Count teams with same score as k-th place team
    int count = 0;
    vector<int> kthPlaceScore = {scores[place-1][0], scores[place-1][1]};
    
    f(i,0,teams){
        if(scores[i] == kthPlaceScore){
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}