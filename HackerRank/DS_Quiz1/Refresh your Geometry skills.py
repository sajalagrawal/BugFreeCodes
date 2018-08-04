#https://www.hackerrank.com/contests/dsquiz1/challenges/geometry-skills/problem
#Author- Sajal Agrawal
#sajal.agrawal1997@gmail.com

line=input()
x = line.split(' ')
a=int(x[0])
b=int(x[1])
c=int(x[2])
s=(a+b+c)/2
res=s*(s-a)*(s-b)*(s-c)
print(res**(1/2))