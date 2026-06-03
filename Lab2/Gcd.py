
from timeit import default_timer

def gcd(a,b):

    if(b==0):
        return a
    else:
        return gcd(b,a%b)
    
a=int(input("Enter the value of a:"))
b=int(input("Enter the value of b:"))

start =default_timer()
result =gcd(a,b)
end=default_timer()

print(f"the result of gcd of {a}and {b} is {result} in time {end-start}")



