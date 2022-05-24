// Leetcode #977

// 1st Solution: Naive Solution (Brute-force)
// Time: O(n * n log n) => O(n log n)
// Space: O(n)

    vector<int> sortedSquares(vector<int>& nums) {
            // Creating a new vector "squaredNums" || Space: O(n)
            vector<int> squaredNums(nums.size());
            // Traversing the array or vector takes O(n), n = input size
            for(int i = 0; i < nums.size(); i++) {
                // For each element in "nums" vector, we square it and put it in "squaredNums" vector 
                int squared = pow(nums[i], 2);
                squaredNums[i] = squared;
            }
            // Sorting the vector takes O(n*log(n))
            sort(squaredNums.begin(), squaredNums.end());
            
            // Returning the sorted squared array (or vector)
            return squaredNums;
        }

// 2nd Solution: Optimal Solution (Two-Pointers)
// Time: O(n)
// Space: O(n)

    vector<int> sortedSquares(vector<int>& nums) {
            // Creating a new vector "squaredNums" || Space: O(n)
            vector<int> squaredNums(nums.size());
            int leftPointer = 0;    // leftPointer starts at the first index (left-most position)
            int rightPointer = nums.size() - 1; // rightPointer starts at the last index (right-most position)
            // Traversing the array or vector takes O(n), n = input size
            for(int i = nums.size() - 1; i >= 0; i--) {
                int leftSquared = pow(nums[leftPointer], 2);
                int rightSquared = pow(nums[rightPointer], 2);
                if(leftSquared < rightSquared) {
                    squaredNums[i] = rightSquared;
                    rightPointer--;
                }
                else {
                    squaredNums[i] = leftSquared;
                    leftPointer++;
                }
                
            }
            return squaredNums;
        }
