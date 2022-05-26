 
for _ in range(int(input())):
    
    n = int(input())
    
    arr = list(map(int, input().split()))
    flag = True
    for i in range(n):
        
        if(i<n-1):
            
            if arr[i] > arr[i+1]:
                print("No")
                flag = False
                break
    
    if(flag):
        print("Yes")