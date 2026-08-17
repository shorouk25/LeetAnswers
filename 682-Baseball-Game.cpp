public class Solution {
    public int CalPoints(string[] operations) {
        Stack<int> stack = new Stack<int>();

        foreach(string op in operations){
            if(int.TryParse(op, out int number)){
                stack.Push(number);
            }
            else if(op == "+"){
                int s1 = stack.Pop();
                int s2 = stack.Peek();
                stack.Push(s1);
                stack.Push(s1+s2);
            }
            else if(op == "D"){
                int d = stack.Peek();
                int result = d*2;
                stack.Push(result);
            }
            else if(op == "C"){
                stack.Pop();
            }
        }

        int sum =0;
        while(stack.Count > 0){
            sum += stack.Pop();
        }
        return sum;
    }
}