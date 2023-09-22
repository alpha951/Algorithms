#include <bits/stdc++.h>
using namespace std;
#define ll long long

// sort array of 0, 1, 2 only

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        // Three Pointers
        /*
            from 0 to low-1  ----> all 0's
            from low to mid-1 ----> all 1's
            from high + 1 to n-1  ---> all 2's

            from mid to high  ---> UNSORTED part
        */
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main()
{
    return 0;
}
