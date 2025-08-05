/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public bool HasCycle(ListNode head) {
        if(head == null || head.next == null){
            return false;
        }

        ListNode fast = head.next;
        
        while(fast != null && fast.next != null ){
            head = head.next;
            fast = fast.next.next;
            if(head == fast){
                return true;
            }
        }
        return false;
    }
}