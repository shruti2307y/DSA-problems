class Solution {
public:
    int findMin(vector<int>& arr) {
        
        int low=0,high=arr.size()-1;
        return findmin(arr,low,high);
    }

    int findmin(vector<int> &arr, int low, int high)
    {
        int mid;

        if(low==high)
            return arr[low];
        else if(low==high-1)
            return min(arr[low],arr[high]);
        while(low<=high)
        {
            mid=(low+high)/2;

            if(mid-1>=low && arr[mid]<arr[mid-1])
                return arr[mid];
            else if(mid+1<=high && arr[mid+1]<arr[mid])
                return arr[mid+1];
            else if(arr[low]>arr[mid])
                high=mid-1;
            else if(arr[high]<arr[mid])
                low=mid+1;
            else 
            {
                int l=findmin(arr,low,mid-1);
                int r=findmin(arr,mid+1,high);

                return min(l,r);
                
            }
                
        }

        return INT_MAX;
    }
};