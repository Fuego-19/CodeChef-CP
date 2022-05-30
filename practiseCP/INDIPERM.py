 
for _ in range(int(input())):
    
    n = int(input())
    
    for i in range(1,n+1):
        
        if i == 1:
            print(n, end = " ")
        else:
            print(i - 1, end = " ")
    
    print()