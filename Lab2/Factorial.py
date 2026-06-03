
# factorila using recursion 

from timeit import default_timer


def fact(n):
    if (n==0 or n==1):
        return 1
    else:
        return n*fact(n-1)

n=int (input("Enter a number to find its factorial:"))

start =default_timer()

print(f"The factorial of {n} is {fact(n)}")

end = default_timer()

print(f"Time taken: {end - start} seconds")