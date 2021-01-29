n = int(input())
nama = []

for i in range(0,n):
    nama.append(input())

for i in range(0,n):
    urutan = 1
    for j in range(0,i):
        if(nama[i] > nama[j]):
            urutan+=1
        
    print(urutan)
