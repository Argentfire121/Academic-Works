def arpGenerator(score):
    if score < 500:
        return 23
    elif score < 600:
        return 11
    elif score < 700:
        return 8
    elif score < 800:
        return 5
    elif score < 851:
        return 3
    else: return -1;

score = input("What is your credit score? ")
print("Your ARP is " + str(arpGenerator(int (score))) + "%")
print("For 700 credit score, your APR would be " + str(arpGenerator(700)) + "%")
print("For 625 credit score, your APR would be " + str(arpGenerator(625)) + "%")
