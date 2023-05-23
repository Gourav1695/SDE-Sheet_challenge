class KthLargest {
public:
priority_queue<int, vector<int>, greater<int>>pq;// min heap

int size;
    KthLargest(int k, vector<int>& nums) {
        size=k;
        for(int i =0; i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>size){
            pq.pop();
        }
        return pq.top();
    }
};

// tc -> O(N)+O(logn) ~ O(N) , O(N) for kthlargest constructor and O(logn) for add function of priority queue is it is internally using binary heap
// space complexicity -> O(K)

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
