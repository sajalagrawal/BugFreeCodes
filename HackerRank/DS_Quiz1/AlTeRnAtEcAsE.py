#https://www.hackerrank.com/contests/dsquiz1/challenges/alternate-case
#Author- Sajal Agrawal
#sajal.agrawal1997@gmail.com

str=input()
for index in range(len(str)):
    if (index%2):
        str=str[:index]+str[index].lower()+str[index+1:]
    else: 
        str=str[:index]+str[index].upper()+str[index+1:]
print(str)