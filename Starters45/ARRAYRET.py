 
for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    sum1 = 0
    for i in arr: 
        sum1 += i
        
    ans =int(sum1/(n+1))
    
    for k in arr:
        print(k - ans, end = ' ')
        
    print()
