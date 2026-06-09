

from timeit import default_timer

def fibom(n):
    T=[]

    if(n<=1):
        return n
    else:
        T.append(0)
        T.append(1)
        for i in range(2,n+1):
            T.append(T[i-1]+T[i-2])
        return T[n] 

        
 
n=int(input("Enter the number of term you want to find fibonacci term :"))
start=default_timer()
result = fibom(n)
end=default_timer()
print(f"Result of the fibonacci series of {n} is {result}")
print(f"Time take to show result is {end-start} second ")   




