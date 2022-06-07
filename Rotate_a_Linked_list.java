class Solution {
    public ListNode rotateRight(ListNode head, int k) {
      if(head == null||head.next == null||k == 0)
        return head;
    //calculating length
    ListNode temp = head;
    int length = 1;
    while(temp.next != null) {
        length++;
        temp = temp.next;
    }
    //link last node to first node
    temp.next = head;
    k = k%length; //when k is more than length of list
    int end = length-k; //to get end of the list
    while(end -->0) 
        temp = temp.next;
    //breaking last node link and pointing to NULL
    head = temp.next;
    temp.next = null;
        
    return head;
 
    }
}
   
