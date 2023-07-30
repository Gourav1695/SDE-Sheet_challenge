// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//     }
// };
// // this is brute force way of doing it 
// //tc-> O(nlogn)
// //sc-> O(1)

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int num0=0;
//         int num1=0;
//         int num2=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             if(nums[i]==0)
//             {
//                 num0++;
//             }
//             else if(nums[i]==1)
//             {
//                 num1++;
//             }
//             else
//             {
//                 num2++;
//             }
//         }
//         for(int i=0; i<num0;i++)
//         {
//             nums[i]=0;
//         }
//         for(int i=num0;i<num0+num1;i++)
//         {
//             nums[i]=1;
//         }
//         for(int i= num0+num1;i<num0+num1+num2;i++)
//         {
//             nums[i]=2;
//         }
//     }
// };
// this is better way of doing it 
//tc-> O(2n)~O(n)
//sc-> O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low=0;
       int mid=0;
       int high= nums.size()-1;
       for(int i=0; i<nums.size();i++){
           if(nums[mid]==0)
           {
               swap(nums[low],nums[mid]);
               low++;
               mid++;
           }
           else if(nums[mid]==1)
           {
               mid++;
           }
           else if(nums[mid]==2)
           {
               swap(nums[mid],nums[high]);
               high--;
           }
       }
    }
};
// this is most optimal algo known as dutch nation flag algo
// tc-> O(N)
// sc -> O(1)
