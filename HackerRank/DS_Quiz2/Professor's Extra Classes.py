#https://www.hackerrank.com/contests/dsquiz2/challenges/professors-extra-classes
#Author- Sajal Agrawal
#sajal.agrawal1997@gmail.com

n=int(input())
arr=list(input().split(' '))
arr=[int(element) for element in arr]
#print(arr)
total=0
for idx in range(len(arr)):
    total+=arr[idx]
total=total/n
#print(total)
count=0
for idx in range(len(arr)):
    if(arr[idx]<total):
        #print(arr[idx])
        count+=1
print(count)