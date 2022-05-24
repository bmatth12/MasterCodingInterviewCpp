bool isMonotonic(vector<int>& nums) {
        int firstElement = nums[0];
        int lastElement = nums[nums.size() - 1];
        
        // Check if it's monotonic increasing
        if(firstElement < lastElement) {
            for(int i = 0; i < nums.size() - 1; i++) {
                if(nums[i] > nums[i + 1])
                    return false;
            }
        }
        
        // Check if it's monotonic decreasing
        else if(firstElement > lastElement) {
            for(int i = 0; i < nums.size() - 1; i++) {
                if(nums[i] < nums[i + 1])
                    return false;
            }
            
        }
        
        // Check if all the elements are the same (repeating)
        else if(firstElement == lastElement) {
            for(int i = 0; i < nums.size() - 1; i++) {
                if(nums[i] != nums[i + 1])
                    return false;
            }
        }
        
        return true;
    }
