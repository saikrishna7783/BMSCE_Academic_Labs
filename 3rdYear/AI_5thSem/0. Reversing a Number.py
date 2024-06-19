num = int(input("Enter any integer: "))
sum = 0

while num > 0:
    sum = 10*sum + num%10
    num //= 10 #use '//' for integer division and '/' for float division

print("The number in reverse order is: ", str(sum)) #no need to use str(sum) here, can use sum only
