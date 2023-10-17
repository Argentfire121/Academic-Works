def convertC(x, y):
    for celsius in range(x, y + 1):
        f = celsius * 9.0/5.0 + 32
        print(celsius, end="")
        print("\u00B0C", end=" = ")
        print(f, end="")
        print("\u00B0F")

print("Please input a minimum:", end=" ")
temp1 = int (input())
print("Please input a maximum:", end=" ")
temp2 = int (input()) 

convertC(temp1, temp2)
