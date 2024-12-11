def letThereBeSandwiches(sandwich):
    n=len(sandwich)
    days = [0] * n
    days[0]=sandwich[0]
    days[1] = max(sandwich[0],sandwich[1])
    
    
    for i in range(2,n):
        days[i]=max(days[i-1],days[i-2]+sandwich[i])
    
    return days[n-1]
    
    
    
sandwich = [1,2,3,4,5,6,7]
print(letThereBeSandwiches(sandwich))


