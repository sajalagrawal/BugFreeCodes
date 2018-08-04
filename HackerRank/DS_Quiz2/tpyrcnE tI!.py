#https://www.hackerrank.com/contests/dsquiz2/challenges/encrypt-it
#Author- Sajal Agrawal
#sajal.agrawal1997@gmail.com

string=input()
key=int(input())
counter=key
for idx in range(len(string)):
    if(string[idx]==' '):
        print(" ",end="")
        continue
    elif(ord(string[idx])>=97 and ord(string[idx])<=122):
        #print(ord(string[idx])-ord('a'))
        #print(ord(string[idx])-ord('a')+counter)
        print( chr(ord('a')+( ord(string[idx])-ord('a')+counter )%26 ), end="" )
    elif(ord(string[idx])>=65 and ord(string[idx])<=90):
        #print(ord(string[idx])-ord('A'))
        #print(ord(string[idx])-ord('A')+counter)
        print( chr(ord('A')+( ord(string[idx])-ord('A')+counter )%26 ), end=""  )
    counter+=1
    if(counter>26):
        counter=1