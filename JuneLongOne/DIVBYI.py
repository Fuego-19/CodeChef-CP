 
for _ in range(int(input())):
    
    n = int(input())
    
    
    op = []
    
    cur = 1 
    cur2 = n
    for i in range(1,n+1):
            
        if(i%2 == 0):
            op.append(cur)
            cur += 1
        else:
            op.append(cur2)
            cur2 -= 1
            
    
    for k in range(n - 1,-1, -1):
        print(op[k], end = " ")
        
    print()

    
    