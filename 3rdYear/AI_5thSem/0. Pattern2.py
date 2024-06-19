# Pattern is 1, 12, 123, 1234, 12345, .....

n = int(input("Enter length of pattern: "))

print("The pattern is: ", end='')
for i in range(n):
    for j in range(i+1):
        print(j+1, end='') #use end=' ' to specify the next print should not be in next line, by default the line is switched
    print(end="\t")
