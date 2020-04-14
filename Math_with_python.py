a=int(input("Enter 1st Number:"))
b=int(input("Enter 2nd Number:"))
c=int(input("Enter 3rd Number:"))
sum=a+b+c
avg=sum/2
remind=sum%2
print("Sum:",sum)
print("Avg:",avg)
print("Reminder:",remind)
if remind== 0:
  print("The Sum is a Even Number")  
else:
    print("The Sum is a Odd Number")
