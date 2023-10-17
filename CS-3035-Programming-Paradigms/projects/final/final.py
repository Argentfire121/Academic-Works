import math

class Cube:
    def __init__(self, length=0):
        try:
            if length < 0:
                raise Exception("Side length must be nonnegative!")
            self.length = float(length)
            self.volume = length**3
            
        except ValueError:
            print("Side length must be a valid float!")
            
    def __eq__(self, other):
        if other == None:
            return False
        elif self.length > other.length - 0.001 and self.length < other.length + 0.001:
            return True
        else:
            return False

    def __add__(cube1, cube2):
        new = Cube(cube1.length + cube2.length)
        new.volume = (cube1.volume + cube2.volume) ** .33333
        return new

    def __str__(self):
        return "Cube with side " + str(self.length) + " and volume " + str(self.volume)

result = None;
result2 = None;

while result == None:
    try:
        cube1 = Cube(int(input("Please enter a non negative float for the length of one side of cube 1: ")));
        result = 1;

    except Exception as e:
        print(e)

print(cube1)

while result2 == None:
    try:
        cube2 = Cube(int(input("Please enter a non negative float for the length of one side of cube 2: ")));
        result2 = 1;

    except Exception as e:
        print(e)

print(cube2)

print(cube1 == cube1)
print(cube1 == cube2)
print(cube1 + cube2)
