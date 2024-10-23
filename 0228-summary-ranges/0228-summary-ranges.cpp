class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        // Check if the input vector is empty
        if(nums.size() == 0)
        {
            return {}; // Return an empty vector
        }
        
        vector<string> ans; // Vector to store the summary ranges
        int n = nums.size(); // Length of the input vector
        
        // Initialize variables for start, end, and a counter
        int start = nums[0], end = nums[0], cnt = nums[0];
        
        // Traverse the input vector starting from the second element
        for(int i = 1; i < n; i++)
        {
            // Check if the current element is consecutive to the previous element
            if(cnt + 1 == nums[i])
            {
                end++; // Update the end variable
                cnt++; // Update the counter
            }
            else
            {
                string str = ""; // String variable to store the summary range
                
                // Check if the start and end are different
                if(start != end)
                {
                    str += to_string(start) + "->" + to_string(end); // Append the start and end to the string
                    ans.push_back(str); // Add the string to the summary ranges vector
                }
                else
                {
                    str = to_string(start); // Convert the start to string
                    ans.push_back(str); // Add the string to the summary ranges vector
                }
                
                // Update the start, end, and counter variables
                start = nums[i];
                end = nums[i];
                cnt = nums[i];
            }
        }
        
        string str = ""; // String variable to store the last summary range
        
        // Check if the start and end are different
        if(start != end)
        {
            str += to_string(start) + "->" + to_string(end); // Append the start and end to the string
            ans.push_back(str); // Add the string to the summary ranges vector
        }
        else
        {
            str = to_string(start); // Convert the start to string
            ans.push_back(str); // Add the string to the summary ranges vector
        }
        
        return ans; // Return the summary ranges vector
    }
};
