# Algoritmos UN - Universidad Nacional

This folder contains solutions and materials from the **Algoritmos** course at Universidad Nacional de Colombia.

## 📚 Course Overview

**Algoritmos** is a fundamental computer science course that covers:
- Problem-solving techniques
- Algorithm design and analysis
- Data structures implementation
- Competitive programming concepts
- Time and space complexity analysis

## 🎯 Taller 1 - Problem Set

### Problem 1: Maximise The Score
- **File**: `1.Maximise The Score.cpp`
- **Problem**: Given 2n numbers, pair them up and maximize the sum of minimum values from each pair
- **Solution**: Sort array and pair consecutive elements (0,1), (2,3), etc.
- **Complexity**: O(n log n) due to sorting
- **Key Concept**: Greedy pairing strategy

### Problem 2: Recovering a Small String
- **File**: `2.Recovering a Small String.cpp`
- **Problem**: Find lexicographically smallest string where sum of character values equals n
- **Solution**: Greedy approach using largest characters (z=26) when possible
- **Complexity**: O(n/26) ≈ O(n)
- **Key Concept**: Greedy string construction

### Problem 3: New Year and Hurry
- **File**: `3.New Year and Hurry.cpp`
- **Problem**: Calculate how many problems can be solved before New Year given time constraints
- **Solution**: Iterate through problems, each problem i takes i*5 minutes
- **Complexity**: O(n)
- **Key Concept**: Simple iteration and time management

### Problem 4: Binary Search Implementation
- **File**: `4.BusquedaBinaria.cpp`
- **Problem**: Find first occurrence of query elements in a sorted array
- **Solution**: Binary search with duplicate handling
- **Complexity**: O(q log n) where q = queries, n = array size
- **Key Concept**: Binary search algorithm, first occurrence finding

### Problem 5: Factorial vs Power
- **File**: `5.Factorial vs Power.cpp`
- **Problem**: Find smallest n where n! > a^n
- **Solution**: Logarithmic approach to avoid overflow
- **Complexity**: O(n) where n is the answer
- **Key Concept**: Logarithmic comparisons, precomputation

## 🛠️ Implementation Details

### Common Code Structure
All solutions follow a consistent competitive programming template:
```cpp
#include <bits/stdc++.h>
using namespace std;

// Common macros and typedefs
#define f(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef map<int,int> mii;
```

### Key Features
- **Fast I/O**: `ios::sync_with_stdio(0); cin.tie(0);`
- **Template**: Standard competitive programming setup
- **Efficiency**: Optimized for time and memory constraints
- **Readability**: Clear variable names and logical structure

## 📖 Learning Objectives

After completing this workshop, students should be able to:
1. **Implement greedy algorithms** for optimization problems
2. **Use binary search** for efficient element finding
3. **Handle mathematical problems** with logarithmic approaches
4. **Apply sorting** for problem-solving strategies
5. **Manage time complexity** in competitive programming scenarios

## 🔍 Problem-Solving Strategies

- **Greedy**: Problems 1, 2, 3
- **Binary Search**: Problem 4
- **Mathematical**: Problem 5
- **Sorting**: Problems 1, 4
- **Iteration**: Problems 3, 5

## 📝 Notes

- All solutions are written in C++ for competitive programming efficiency
- Problems are designed to test understanding of fundamental algorithms
- Solutions demonstrate different problem-solving paradigms
- Each problem includes detailed comments explaining the approach

## 🚀 Next Steps

After mastering these problems, students typically move on to:
- Dynamic programming problems
- Graph algorithms
- Advanced data structures
- More complex greedy algorithms
- Advanced mathematical problems

---

*This workshop serves as a foundation for more advanced algorithmic concepts in competitive programming and computer science.*
