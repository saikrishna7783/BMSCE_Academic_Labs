x, n = input("Enter the base and power: ").split() #use split function to take multiple inputs
x = int(x)
n = int(n) #the returned value is a list of strings so need to convert to int or float

print(x, " to the power of ", n, " is ", pow(x,n))
