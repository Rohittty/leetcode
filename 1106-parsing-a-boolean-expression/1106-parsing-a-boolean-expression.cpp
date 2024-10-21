class Solution {
private:
    // Helper function to evaluate the logical expression based on the operator
    char helper(char op, stack<char>& operand_st) {
        if (op == '&') {
            // For AND operation, start with true
            bool result = true;
            // Evaluate until we find the opening parenthesis
            while (!operand_st.empty() && operand_st.top() != '(') {
                result &= (operand_st.top() == 't'); // Perform logical AND
                operand_st.pop();
            }
            return result ? 't' : 'f'; // Return 't' if true, otherwise 'f'
        } else if (op == '|') {
            // For OR operation, start with false
            bool result = false;
            // Evaluate until we find the opening parenthesis
            while (!operand_st.empty() && operand_st.top() != '(') {
                result |= (operand_st.top() == 't'); // Perform logical OR
                operand_st.pop();
            }
            return result ? 't' : 'f'; // Return 't' if true, otherwise 'f'
        } else { // op == '!'
            // For NOT operation, invert the value of the top element
            char top = operand_st.top();
            operand_st.pop(); // Remove the value from the stack
            return (top == 't') ? 'f' : 't'; // Return inverted value
        }
    }

public:
    // Main function to parse and evaluate the boolean expression
    bool parseBoolExpr(string expression) {
        stack<char> operand_st, operator_st; // Stacks for operands and operators
        for (char it : expression) {
            if (it == 't' || it == 'f' || it == '(') {
                operand_st.push(it); // Push operands and opening parenthesis onto stack
            } else if (it == '&' || it == '|' || it == '!') {
                operator_st.push(it); // Push operators onto stack
            } else if (it == ')') {
                // When encountering a closing parenthesis, evaluate the expression
                char op = operator_st.top(); // Get the operator
                operator_st.pop(); // Remove the operator from the stack
                char ans = helper(op, operand_st); // Evaluate the expression using the helper function
                operand_st.pop(); // Remove the opening parenthesis from the stack
                operand_st.push(ans); // Push the result back onto the operand stack
            }
        }
        return operand_st.top() == 't'; // Return true if the final result is 't'
    }
};