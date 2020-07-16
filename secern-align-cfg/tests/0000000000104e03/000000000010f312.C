r=int(input())
c=int(input())

def mincost(cost,a,b):
    total=[[0 for x in range(c)] for x in range(r)]
    total[0][0]=cost[0][0]
    for i in range(1,a+1):
        
        total[i][0]=total[i-1][0]+cost[i][0]
        for j in range(1,b+1):
            
        total[0][j]=total[0][j-1]+cost[0][j]
        for i in range(1,i+1):
            
            for j in range (1,j+1):
                
                total[i][j]=min(total[i-1][j-1],total[i-1][j],total[i][j-1],cost[i][j])
                return total[a][b]