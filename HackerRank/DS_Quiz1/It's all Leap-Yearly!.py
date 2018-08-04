#https://www.hackerrank.com/contests/dsquiz1/challenges/its-all-leap-yeary
#Author- Sajal Agrawal
#sajal.agrawal1997@gmail.com

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the checkLeapYear function below.
def checkLeapYear(year):
    # Write Your Code Here
    if(year%400==0 or (year%4==0 and year%100)):
        return "Leap Year"
    else:
        return "Not a Leap Year"
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    # Input is taken here

    year = int(input().strip())

    result = checkLeapYear(year)
    # Result is printed here

    fptr.write(result + '\n')

    fptr.close()