 
for _ in range(int(input())):
    
    n = int(input())
    
    arr = list(map(int, input().split()))
    
    mini = arr[0]
    maxi = arr[0]
    flag = True
    
    for i in range(n):
        
        if arr[i] > mini and arr[i] < maxi:
            flag = False
        
        else:
            if arr[i] >= maxi:
                maxi = arr[i]
            elif arr[i] <= mini:
                mini = arr[i]
    
    if(flag):
        print("YES")
    else:
        print("NO")