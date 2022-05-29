 
for _ in range(int(input())):
    
    n = int(input())
    
    sml = 10**(n - 1) + 2
    
    
    for i in range(sml, 10**n, 3):
        
        if i%2 != 0: 
            if i%9 != 0:
                print(i)
                break
        
    
    