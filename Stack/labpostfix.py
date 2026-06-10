  # Evaluting postfix expression using pyhton 22


def evalute_postfix(expression):
    stack=[]
    tokens = expression.split()

    for token in tokens:
        if token.isdigit():
           stack.append(int(token))
        else:
            val1=stack.pop()
            val2=stack.pop()

            if token=='+':
                stack.append(val1+val2)
            elif token =='-':
                stack.append(val2-val1)
            elif token =='*':
                stack.append(val2*val1)
            elif token =='/':
                stack.append(val2/val1)
            elif token =='^':
                stack.append(val2**val1)

    return stack.pop()

expression =input("Enter a postfix expression:(in space-separeted) ")
result = evalute_postfix(expression)
print(f"The result of the postfix expression is: {result}")      



