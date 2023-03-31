
def doutwo(x):
    makan = set()
    for i in range (1,len(x)-1):
        for j in range (1,len(x)-1):
            if (x[i] == x[j]) & (i != j):
                makan.add(x[j])

    return makan
    
x = [1,3,5,5,7,8,10,5,5,7,7,0]
print(doutwo(x))