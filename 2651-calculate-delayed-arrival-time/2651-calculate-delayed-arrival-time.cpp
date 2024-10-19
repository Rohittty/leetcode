class Solution {
public:
    int findDelayedArrivalTime(int arr, int del) {
        if(arr+del==24)return 0;
        else if(arr+del>24)return abs(arr+del-24);
        return arr+del;
    }
};