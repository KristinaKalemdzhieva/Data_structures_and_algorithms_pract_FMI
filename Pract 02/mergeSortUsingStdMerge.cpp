class Solution {
    //Sorts the subarray of arr in the range [lhs, rhs]
    void mergeSort(vector<int>& arr, int lhs, int rhs)
    {
        if(lhs < rhs)
        {
            //Calculate the mid element's index:
            int mid = lhs + (rhs - lhs) / 2;

            //Sort the left subarray:
            mergeSort(arr, lhs, mid);
           
            //Copy the sorted left subarray into vector firstArr:
            vector<int> firstArr(mid - lhs + 1);
            for(int arrInd = lhs, firstInd = 0; arrInd <= mid; arrInd++, firstInd++)
            {
                firstArr[firstInd] = arr[arrInd];
            }

            //Sort the right subarray:
            mergeSort(arr, mid + 1, rhs);

            //Copy the sorted right subarray into vector secondArr:
            vector<int> secondArr(rhs - mid);
            for(int arrInd = mid + 1, secondInd = 0; arrInd <= rhs; arrInd++, secondInd++)
            {
                secondArr[secondInd] = arr[arrInd];
            }

            //Merge the two sorted subarrays via std::merge into arr:
            merge(firstArr.begin(), firstArr.end(), secondArr.begin(), secondArr.end(), arr.begin() + lhs);
        }
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        //Sort vector of integers via Merge Sort algorithm:
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};