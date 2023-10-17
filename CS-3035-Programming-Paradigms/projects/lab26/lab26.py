import math

class RightTriangle():
    def __init__(self, side1, side2, hypo):
        
        try:
        
            if side1 < 0 or side2 < 0 or hypo < 0:
                raise Exception("Can't have negative parameters!")
            
            temp = math.pow(side1, 2) + math.pow(side2, 2)
            if temp > math.pow(hypo, 2) - 0.0001 and temp < math.pow(hypo, 2):

                self.side1 = float(side1)
                self.side2 = float(side2)
                self.hypo = float(hypo)

        except ValueError:
            print("Sides must be a valid number!")

        finally:
            print("Values stored correctly.");

    @classmethod
    def __className__(self, side1, side2, hypo=None):

        try:
        
            if side1 < 0 or side2 < 0:
                raise Exception("Can't have negative parameters!")
            
            hypo = math.pow(side1, 2) + math.pow(side2, 2)

            self.side1 = float(side1)
            self.side2 = float(side2)
            self.hypo = float(hypo)

        except ValueError:
            print("Sides must be a valid number!")

        finally:
            print("Values stored correctly.");

    def __eq__(self, other):
        if self.hypo > other - 0.0001 and self.hypo < other + 0.0001 :
            return true
        else:
            return false

    def __str__(self):
        return "Right triange with a side a = " + str(self.side1) + ", side b = " + str(self.side2) + "and hypotenus =" + str(self.hypo)

result = None

while result == None:
    x = input("Please enter a side: ")
    y = input("Please enter a second side: ")

    try: 
        result = (str(RightTriangle(x, y)))
    except Exception as e:
        print(e)
        print(result)

result2 = None
while result2 == None:
    x2 = input("Please enter a side: ");
    y2 = input("Please enter a 2nd side: ");
    z2 = input("Please enter a hypotenus: ")

    try:
        result = (str(RightTriangle(x2, y2, z2)))
    except Exception as e:
        print(e)
        print(result)
