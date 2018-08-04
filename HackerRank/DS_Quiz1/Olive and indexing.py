#https://www.hackerrank.com/contests/dsquiz1/challenges/olive-and-indexing
#Author- Sajal Agrawal
#sajal.agrawal1997@gmail.com

line=input()
x = line.split(' ')
m=int(x[0])
n=int(x[1])
i=int(x[2])
j=int(x[3])
result=i*n+j+1 #n=number of columns
print(result)
