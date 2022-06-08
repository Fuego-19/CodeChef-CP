 
for _ in range(int(input())):
    
    # n = int(input())
    s = list(map(int, input().split()))
    a = s[0]
    b = s[1]
    if(a%3 == 0):
        print(0)
    elif(b%3 == 0):
        print(0)
    
    else:
        count = 0
        while(True):
            temp = abs(a - b)
            count+=1 
            if (temp%3 == 0):
                print(count)
                break
            else:
                tmp2 = max(a,b)
                if(tmp2 == a):
                    a = temp
                else:
                    b = temp