import turtle
import math
import random
import string
from array import *
import csv
grade=0
name=input("enter your name: ")
q1_num1=random.randint(1,100)
q1_num2=random.randint(1,100)
q1=str(q1_num1)+"+"+str(q1_num2)+"="
ans=int(input(str(q1)))
if ans==(q1_num1+q1_num2):
    grade+=1
q2_num1 = random.randint(20,100)
q2_num2 = random.randint(20,100)
while q2_num1 == q1_num1 and q2_num2 == q1_num2:  # Ensure different numbers
    q2_num1 = random.randint(1, 100)
    q2_num2 = random.randint(1, 100)
q2 = str(q1_num1) + "+" + str(q1_num2) + "="
ans=int(input(q2))
if ans==(q2_num1+q2_num2):
    grade+=1
file=open("grades.csv","w")
new=str(name)+","+str(grade)+"\n"
file.write(new)
file.close()


