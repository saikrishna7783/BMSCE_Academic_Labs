age = int(input("Enter your age: "))

if age < 0 or age > 150:
    print("Enter a valid age!")
else:
    if age<13:
        print("You are a child!")
    elif age<20:
        print("You are a teenager!")
    elif age<35:
        print("You are an adult!")
    elif age<60:
        print("You are a middle aged person!")
    else:
        print("You are a senior citizen!")
