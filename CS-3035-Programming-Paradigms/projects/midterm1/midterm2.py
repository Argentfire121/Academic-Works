# this class aims to mimic an apartment in holding a size attribute.
# Dexter Kale - CS-3035 - Section 05

class Apartment:
    def __init__(self, sizeInSquareFeet):
        self.size = sizeInSquareFeet

    def __eq__(self, other):
        if (self.size == other.size):
            return True
        else:
            return False

    def __add__(self, other):
        return self.size + other.size

    def __sub__(self, other):
        if ((self.size - other.size) < 0):
            return 0;
        else:
            return self.size - other.size

    def __str__(self):
        return "Apartment with size " + str(self.size) + " square feet."

a1 = Apartment(1)
print(a1)
a2 = Apartment(2)
a3 = Apartment(3)
print(a2)
print(a1 + a2)
print(a2 + a1)
print(a1 - a2)
print(a2 - a1)
print(a1 == a2)
print(a2 == a1)
print(a1 == a1)
print(a3 == a1)
print(a1 == a3)
