#https://www.hackerrank.com/contests/dsquiz2/challenges/equations-roots
#Author- Sajal Agrawal
#sajal.agrawal1997@gmail.com

line=input().split(' ')
line=[int(i) for i in line]
#print(line)
b=line[0]
c=line[1]
if( (b*b-4*c) >= 0):
    print("Real roots")
else:
    print("Imaginary roots")