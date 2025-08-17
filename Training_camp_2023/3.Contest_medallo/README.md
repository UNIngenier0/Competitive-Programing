# Contest Medallo 3 - Training Camp 2023

Third contest of the training camp featuring a contest ranking system problem.

## 📝 Problem

### Problem A: Contest Ranking System
- **File**: `ContestRankingSystem.cpp`
- **Task**: Implement contest ranking system with tiebreaker logic
- **Solution**: Sort teams by problems solved (desc) then penalty (asc)
- **Complexity**: O(n log n) due to sorting
- **Status**: ✅ Complete and working

## 🎯 Problem Description

Implement a contest ranking system where teams are ranked by:
1. **Primary Criteria**: Number of problems solved (descending order)
2. **Tiebreaker**: Penalty time (ascending order - lower penalty wins)

After ranking, count how many teams have the same score as the k-th place team.

## 🔧 Solution Approach

1. **Input**: Number of teams, k-th place, and each team's problems solved and penalty time
2. **Processing**: Sort teams using custom comparison function
3. **Output**: Count of teams with same score as k-th place team

## 🧮 Algorithm Details

- **Sorting**: Custom comparator handles both ranking criteria
- **Comparison**: First compares problems solved, then penalty time
- **Counting**: Linear scan to count teams with identical scores
- **Data Structure**: 2D vector storing [problems, penalty] for each team

*Single problem contest focusing on ranking system implementation.*
