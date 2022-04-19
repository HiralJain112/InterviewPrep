/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        //This is the first method in which we sort and then check consecutive pairs : O(nlogn) 
        /*
        
        int result = -1;
        
        int length = nums.size();
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i<length; i++)
        {
            if(nums[i] == nums[i+1])
            {
                result = nums[i];
                break;
            }
        }
        return result;
        
        */
        
        //This is the second method, here we use an extra array and check which index
        //has more than one occurence: O(n), O(n)
        
        /*
        const int length = nums.size();
        int arr[length+1];
        for(int i = 0; i<=length; i++)
        {
            arr[i] = 0;
        }
        int result = -1;
        
        for(int i = 0; i<length; i++)
        {
            arr[nums[i]]++;
            if(arr[nums[i]] >1)
            {
                result = i;
                break;
            }
        }
        
        return result;
        
        */
        
        // 3rd approach : O(n) time and O(1) space
        int slow = nums[0];
        int fast = nums[0];
        
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        
        fast = nums[0];
        while(slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow;
    }
};
