#https://www.hackerrank.com/contests/dsquiz1/challenges/maximize-gold-coins
#Author- Sajal Agrawal
#sajal.agrawal1997@gmail.com

k,b = input().strip().split(' ')
k,b = [int(k),int(b)]
treasure = []
for box_i in range(b):
    x=input().split(' ')
    box = [int(x[0]),int(x[1])]
    #print(box)
    box.reverse()
    treasure.append(box)
# your code goes here
treasure=sorted(treasure,reverse=True)
#print(treasure)
ans=0
for i in range(b):
    if(k>=treasure[i][1]):
        ans+=treasure[i][0]*treasure[i][1]
        k-=treasure[i][1]
    else:
        ans+=k*treasure[i][0]
        break
print(ans)