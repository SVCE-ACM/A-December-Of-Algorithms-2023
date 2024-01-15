def textToWord(word):
    s = ""
    for i in word:
        if i.isalpha():
            s+= str(numToWordDict[i])
        else:
            s+= i
    print(s)

numToWordDict = {
    "A": 2,
    "B": 2,
    "C": 2,
    "D": 3,
    "E": 3,
    "F": 3,
    "G": 4,
    "H": 4,
    "I": 4,
    "J": 5,
    "K": 5,
    "L": 5,
    "M": 6,
    "N": 6,
    "O": 6,
    "P": 7,
    "Q": 7,
    "R": 7,
    "S": 7,
    "T": 8,
    "U": 8,
    "V": 8,
    "W": 9,
    "X": 9,
    "Y": 9,
    "Z": 9,
}


# Test case
textToWord("123-647-EYES") #➞ "123-647-3937"
textToWord("(325)444-TEST")# ➞ "(325)444-8378"
textToWord("653-TRY-THIS") #➞ "653-879-8447"
textToWord("435-224-7613") #➞ "435-224-7613"
