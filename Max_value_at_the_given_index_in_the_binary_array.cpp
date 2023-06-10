#define ll long long int
class Solution {
public:
int maxValue(int n, int index, int maxSum) {
int emptyR = n - index - 1;
int emptyL = index;
int h = maxSum, l = 1;
ll res = 0;
while(l <= h){
int mid = (h-l)/2 + l;
ll leftSum = 0, rightSum=0, el=mid-1;
if(emptyR <= el)

rightSum = (el*(el+1))/2 - ((el-emptyR)*(el-emptyR+1))/2;
else
rightSum = (el*(el+1))/2 + (emptyR - el);
if(emptyL <= el)
leftSum = (el*(el+1))/2 - ((el-emptyL)*(el-emptyL+1))/2;
else
leftSum = (el*(el+1))/2 + (emptyL - el);
ll sum = leftSum + mid + rightSum;
if(sum <= maxSum){
l = mid+1;
res = mid;
}else{
h = mid-1;
}
}
return res;
}
};
