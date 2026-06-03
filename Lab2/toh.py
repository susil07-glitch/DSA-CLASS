

def TOH(n,src,temp,dist):
    if(n==1):
        print(f"Move the disk {n} from {src} to {dist}")

    else:
        TOH(n-1,src,temp,dist)
        print(f"Move the disk {n} from {src} to {dist}")
        TOH(n-1,src,dist,temp)

result=TOH(n,'A','B','C')

print(f"")


