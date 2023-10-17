class Bunny:
    def __init__(self, bunnyName, bunnySize):
        self.name = bunnyName
        self.size = bunnySize

    def __str__(self):
        return (self.name + " is a " + str(self.size)  + " pound bunny." )

    def __add__(self, otherBunny):
        return self.name + otherBunny.name

fluffles = Bunny("Fluffles", 3)
bumble = Bunny("Bumble", 5)

print(fluffles)
print(fluffles + bumble)
