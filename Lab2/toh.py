


# tower of hanoi


def TOH(n,src,dist,temp):
    if(n==1):
        print(f"Move the disk {n} from {src} to {dist}")

    else:
        TOH(n-1,src,temp,dist)
        print(f"Move the disk {n} from {src} to {dist}")
        TOH(n-1,temp,dist,src)

n=int(input("Enter the number of disks: "))
result=TOH(n,'A','C','B')

print(f"Solution for Tower of Hanoi with {n} disks:{2**n-1} moves")

