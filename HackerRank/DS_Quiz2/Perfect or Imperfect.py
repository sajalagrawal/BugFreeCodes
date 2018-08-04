#https://www.hackerrank.com/contests/dsquiz2/challenges/perfect-or-imperfect
#Author- Sajal Agrawal
#sajal.agrawal1997@gmail.com

def solve(arr):
    mp = [0] * 1010 #hashmap
    #print(arr)
    for i in range(len(arr)):
        mp[arr[i]]+=1
        if( (arr[i]%2) == (i%2) ):
            return "Imperfect"
    #print(mp)
    for i in range(len(mp)):
        if(mp[i]!=0 and (mp[i]%2 ==  i%2) ):
            return "Imperfect"
    
    return "Perfect"
n=int(input())
arr=list(input().split(' '))
arr=[int(element) for element in arr]
print(solve(arr))