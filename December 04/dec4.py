def riddle(string):
    shortPalindrome = ""
    n = len(string)
    for i in range(n):
        for j in range(i+2,n+1):
            if isPalindrome(string[i:j]) and (not shortPalindrome or len(string[i:j]) < len(shortPalindrome)):
                    shortPalindrome = string[i:j]
    if shortPalindrome == "":
        return "Error"
    else:
        return shortPalindrome

def isPalindrome(subString):
    return subString == subString[::-1]

def main():
    string = input()
    print(riddle(string))
main()