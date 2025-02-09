/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {

        int len=0;
        ListNode temp=head;
        while(temp!=null)
        {
            temp=temp.next;
            len++;
        }

        if(len==1)
        {
            head=null;
            return head;
        }

        
        ListNode current=head;
        ListNode prev=null;
        for(int i=1;i<len-n+1;i++)
        {
            prev=current;
            current=current.next;
        }

        if(n==len)
        {
            return head.next;
        }
        else
        {
        prev.next=current.next;
        }
        return head;
    }
   
}
