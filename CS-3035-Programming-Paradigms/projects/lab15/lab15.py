class Monster:
    def __init__(self, monName, monSize):
        self.name = monName
        self.size = monSize

    def __str__(self):
        return self.name + " is " + str(self.size)  + " feet tall!"

    def attack(self, location):
        print(self.name + " attacks " + location)

    def __eq__(self, mon):
        if self.name == mon.name and self.size == mon.size:
            return True
        else: return False

    def __add__(self, mon):
        return self.name + mon.name

godzilla = Monster("Godzilla", 400)
kingKong = Monster("Kong", 50)

print(godzilla)
print(kingKong)
godzilla.attack("Tokyo")
kingKong.attack("New York City")
print(godzilla == kingKong)
print(godzilla + kingKong)
