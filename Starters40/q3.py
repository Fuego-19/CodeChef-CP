 
for _ in range(int(input())):
    n = int(input())
    if(n == 1):
        print(0)
        continue
    if(n%5 == 0 or n%5 == 1):
        ans = int(n/5)*2
    else:
        ans = int(n/5)*2 + 1
    
    print(ans)
   