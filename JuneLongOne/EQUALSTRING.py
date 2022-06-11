 
for _ in range(int(input())):
    
    n = int(input())
    
    a = input()
    b = input()
    temp = ''
    prev = ''
    count = 0
    for i in range(n):
        if a[i] == b[i]:
            continue
        else:
            temp += b[i]
    
    c = sorted(temp)
    
    for i in range(len(c) - 1):
        if(c[i]!= c[i+1]):
            count+=1
    count+=1
    print(count)

    
    