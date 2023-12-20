def textToNum(phone_num):
    dic = {"ABC" : "2", "DEF" : "3", "GHI" : "4", "JKL" : "5", "MNO" : "6", "PQRS" : "7", "TUV" : "8", "WXYZ" : "9"}
    output = ""
    for char in phone_num:
        if char.isalpha():
            for letter in dic:
                if char in letter:
                    output += dic[letter]
                    break
        else:
            output += char
    print(output)

inp = input("Enter the letter-encoded numbers : ")
textToNum(inp)
