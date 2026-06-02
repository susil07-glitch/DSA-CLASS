

# factorial of a number using recursion i python 22 


def fact(n):
    if (n==0 or n==1):
        return 1
    else:
        return n*fact(n-1)

n=int (input("Enter a number to find its factorial:"))

print(f"The factorial of {n} is {fact(n)}")
