



# to find the greatest common divisor of two numbers using recursion in python 22       


def gcd(a,b):
    
    if(b==0):
        return a
    else:
        return gcd(b,a%b)
    
a = input("Enter the first number :")
b = input("Enter the second number :")
print(f"The greatest common divisor of {a} and {b} is {gcd(a,b)}")  




