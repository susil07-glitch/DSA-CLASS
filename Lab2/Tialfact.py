

# factorial using tail recursion 


from timeit import default_timer


def tailfact(n,a):

    if (n==0 or n==1):
        return a
    else:
        return tailfact(n-1, n*a)
    
n=int(input("Enter a number to find its factorial:"))



start=default_timer()
result=tailfact(n,1)
end=default_timer()

print(f"The fctorial of {n} is {result}")

print(f"time taken to process tail factorial is {end-start} second")



