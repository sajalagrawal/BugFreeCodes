#https://www.hackerrank.com/contests/dsquiz2/challenges/karel-the-robot/problem
#Author- Sajal Agrawal
#sajal.agrawal1997@gmail.com

line=input().split(" ")
line=[int(element) for element in line]
print("{0} {1}".format(line[2]-1,line[3]-1))