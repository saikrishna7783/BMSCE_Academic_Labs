# Pattern is 1, 22, 333, 4444, 55555, .....

n = int(input("Enter length of pattern: "))

for i in range(n):
    for j in range(i+1):
        print(i+1, end='') #use end=' ' to specify the next print should not be in next line, by default the line is switched
    print(end="\t")
