class Solution {
    //Merges two subarrays of arr - arr1 and arr2, where:
    //arr1 = {arr[lhs], ... , arr[mid]}
    //arr2 = {arr[mid + 1], ..., arr[rhs]}
    void merge(vector<int>& arr, int lhs, int mid, int rhs)
    {
        int firstInd = lhs; //current index of arr1
        int secondInd = mid + 1; //current index of arr2

        //Create temporary vector:
        vector<int> temp;

        //Merge arr1 and arr2 into the temporary vector in ascending order:
        while(firstInd <= mid && secondInd <= rhs)
        {
            if(arr[firstInd] < arr[secondInd])
            {
                temp.push_back(arr[firstInd++]);
            }
            else
            {
                temp.push_back(arr[secondInd++]);
            }
        }

        //Add the remaining elements of arr1, if any, to the temporary vector:
        while(firstInd <= mid)
        {
            temp.push_back(arr[firstInd++]);
        }

        //Add the remaining elements of arr2, if any, to the temporary vector:
        while(secondInd <= rhs)
        {
            temp.push_back(arr[secondInd++]);
        }

        //Copy the temporary vector into arr in the range [lhs, rhs]:
        int index = lhs;
        for(auto iter = temp.begin(); iter != temp.end(); iter++, index++)
        {
            arr[index] = *(iter);
        }
    }

    //Sorts the subarray of arr in the range [lhs, rhs]
    void mergeSort(vector<int>& arr, int lhs, int rhs)
    {
        if(lhs < rhs)
        {
            //Calculate the mid element's index:
            int mid = lhs + (rhs - lhs) / 2;

            //Sort the left subarray:
            mergeSort(arr, lhs, mid);

            //Sort the right subarray:
            mergeSort(arr, mid + 1, rhs);

            //Merge the sorted subarrays:
            merge(arr, lhs, mid, rhs);
        }
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        //Sort vector of integers via Merge Sort algorithm:
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};