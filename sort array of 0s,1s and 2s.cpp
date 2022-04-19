/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        //Approach 1: to simply sort the array using qick sort or merge sort
        // TC :O(nlog n)
        // SC : O(1)
        
        /*
        
        sort(nums.begin(), nums.end());
        
        */
        
        //Approach 2: Dutch National Flag , split the array into 4 parts with 3 pointers such that 
        // all the elements to the left of low pointer are 0s, right of high pointer are 2s and 
        // between mid and high are unknown
        
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        
        while(mid <= high)
        {
            switch(nums[mid])
            {
                case 0:
                    swap(nums[low], nums[mid]);
                    low++;
                    mid++;
                    break;
                    
                case 1:
                    mid++;
                    break;
                    
                case 2:
                    swap(nums[mid], nums[high]);
                    high--;
                    break;
            }
            
        }
    }
};
