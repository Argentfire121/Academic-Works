def countPermutate(count, string):

    if string == '':
        return count

    else:
        count += 1
        return countPermutate(count, string[1:])

def reverseString(string, newString):

    if string == '':
        return newString

    else:
        newString = string[0] + newString
        return reverseString(string[1:], newString)

def palindromeCheck(string, newString, checkString):
    if checkString == '': # set check string
        string = ''.join(c if c.isalpha() else '' for c in string.lower()) #shamelessly taken from stringConversion.py
        checkString = string

    if checkString == newString: # check if palindrome`
        return True

    elif string == '': # check if empty
        return False

    else:   # recursion case
        newString = string[0] + newString
        
        return palindromeCheck(string[1:], newString, checkString)

value = input("Enter a word to see how many letters it has: ")
x = countPermutate(0, value)
print(x)

value2 = input("Enter a word to reverse it!: ")
y = reverseString(value2, '')
print(y)

value3 = input("Enter a word to see if it's a palindrome!: ")
z = palindromeCheck(value3, '', '')
print(z)
