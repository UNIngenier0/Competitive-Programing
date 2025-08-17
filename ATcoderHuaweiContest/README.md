# AtCoder Huawei Contest

Solutions from the AtCoder Huawei Contest competitive programming competition.

## 📝 Problems

### Problem A: First Unique Character
- **File**: `FirstUniqueCharacter.cpp`
- **Task**: Find position of first character appearing exactly once in a string
- **Solution**: Count character frequencies, find first with count 1
- **Complexity**: O(n)

### Problem B: First Occurrence Query
- **File**: `FirstOccurrenceQuery.cpp`
- **Task**: Find first occurrence of either value a or b in a vector
- **Solution**: Linear search through vector for each query
- **Complexity**: O(q*n)

## 🚨 Issues
- Problem B has uninitialized variable `n` (bug)
- Debug output "...." should be removed
- Could be optimized with hash map preprocessing

## 🎯 Learning
- String processing and frequency counting
- Query handling and search algorithms
- Data structure selection (maps vs vectors)
- Competitive programming techniques

---
*Fundamental algorithmic concepts for competitive programming.*
