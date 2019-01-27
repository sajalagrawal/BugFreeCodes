#https://www.hackerearth.com/problem/algorithm/geeko-and-tree-2/description/
#Author- Sajal Agrawal
#sajal.agrawal1997@gmail.com

t=int(input())
while(t):
    ip=raw_input().split(' ')
    #print(ip)
    k=int(ip[0])
    n=int(ip[1])
    nodes=(k**(n+1)-1)/(k-1)
    ans=0
    while(nodes):
        ans+=nodes%10
        nodes=nodes//10
    print(int(ans))
    t-=1
