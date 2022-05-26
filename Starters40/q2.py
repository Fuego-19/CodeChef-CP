 
for _ in range(int(input())):
    
    n,x,y = map(int, input().split())
    
    arr = list(map(int, input().split()))
    
    
    sum1 =0
    for i in arr: 
        sum1 += i
    
    
    disCost = x
    
    for j in arr:
        
        temp = j - y
        disCost += max(0, temp)
        
    if(disCost < sum1):
        print("COUPON")
    else:
        print("NO COUPON")