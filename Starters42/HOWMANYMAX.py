 
for _ in range(int(input())):
    
    n = int(input())
    
    arr = input()
    maxi = 0
    
    for i in range(n - 1):
        if(arr[i] == '0'):
            if(i == n - 2):
                maxi+=1
        else:
            if(i - 1 >= 0):
                if(arr[i - 1]!= '1'):
                    maxi+=1
            elif(i == 0):
                maxi+=1
                
    
    print(maxi)
    