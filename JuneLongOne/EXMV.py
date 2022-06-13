 
for _ in range(int(input())):
    
    tx,tn = map(int, input().split())
    
    sol = (tx - 1) * (2*tn - tx);
    
    print(sol)