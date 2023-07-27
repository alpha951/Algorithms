/*
int low = 0, high = val;
while (low < high)  // no <=  to avoid infinite loop
{
    int mid = low + (high - low) / 2;
    int totalCost = (mid)*upgrade[i] - (nums[i] - mid) * sell[i];
    if (totalCost <= money[i])
    {
        low = mid + 1; /
    }
    else
    {
        high = mid;  //no mid -1 because mid is  possible
    }
}
ans[i] = low - 1;  // low-1 because low is the first value that is not possible
*/