

#Fibonacci term using recursion
from timeit import default_timer


def fibo(n):
    if(n<=1):
        return n
    else :
     return fibo(n-1)+fibo(n-2)
    
n=int(input("Enter the number of term you want to find fibonacci term :"))
start=default_timer()
result = fibo(n)
end=default_timer()
print(f"Result of the fibonacci series of {n} is {result}")
print(f"Time take to show result is {end-start} second ")


   
    

