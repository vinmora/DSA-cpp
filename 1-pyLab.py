def primeset(num):
    primeset = set()
    prima = bool
    for i in range (2,num):
        prima = True
        for j in range ( 2, i):
            if (i % j == 0):
                prima = False
                break  
        if (prima == True):
            primeset.add(i)     
    return primeset

def totalint(set):
    y = 0
    for x in set:
        y =  y + x
    return y

x = int(input("Masukkan jumlah maks : "))

print(primeset(x))
print("Jumlah keseluruhan angka prima: " , totalint(primeset(x)))