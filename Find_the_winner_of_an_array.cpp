// class Solution {
// public:
//     int getWinner(vector<int>& arr, int k) {
//         queue<int>qp;
//         int max_element= arr[0];
//         for(int i=1;i<arr.size();i++)
//         {
//             max_element= max(max_element, arr[i]);
//             qp.push(arr[i]);
//         }
//         int curr = arr[0];
//         int max_steak=0;

//         while(true)
//         {
//             int checking = qp.front();
//             qp.pop();
//             if(curr>checking)
//             {
//                 qp.push(checking);
//                 max_steak++;
//             }
//             else
//             {
//                 qp.push(curr);
//                 curr= checking;
//                 max_steak=1;
//             }
//             if(max_steak== k|| curr== max_element)
//             {
//                 return curr;
//             }
//         }
//         return -1;
//     }

// };
//tc -> O(n)
//sc -> O(n) -> becoz of the queue 

// but actually there is no need of the queue at all we can remove this queue

class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int max_element= arr[0];
        for(int i=1;i<arr.size();i++)
        {
            max_element= max(max_element, arr[i]);
        }
        int curr = arr[0];
        int max_steak=0;

        for(int i=1; i<arr.size();i++)
        {
            int checking = arr[i];
            
            if(curr>checking)
            {
                
                max_steak++;
            }
            else
            {
              
                curr= checking;
                max_steak=1;
            }
            if(max_steak== k|| curr== max_element)
            {
                return curr;
            }
        }
        return -1;
    }

};

// tc -> O(n)
//sc -> O(1) -> as here we are not using any extra space
