import random
tot_pos = []
res = []
t = int(input())
r,c = map(int, input().split())
for test in range(t):
    for x in range(r):
        for y in range(c):
            tot_pos.append([x,y])
    p = random.choice(tot_pos)
    tot_pos.remove(p)
    i = p[0]
    j = p[1]
    k = 0 
    while(k<r):
        res.append([k,j])
        k = k+1
    k = 0
    while(k<c):
        res.append([i,k])
        k=k+1
    while(i!=0 and j!=0):
        i=i-1
        j=j-1
        res.append([i,j])
    i = p[0]
    j = p[1]
    while(i!=(r-1) and j!=(c-1)):
        i=i+1
        j=j+1
        res.append([i,j])
    i = p[0]
    j = p[1]
    while(i!=(r-1) and j!=0):
        i=i+1
        j=j-1
        res.append([i,j])
    i = p[0]
    j = p[1]
    while(i!=0 and j!=r-1):
        i=i-1
        j=j+1
        res.append([i,j])
    