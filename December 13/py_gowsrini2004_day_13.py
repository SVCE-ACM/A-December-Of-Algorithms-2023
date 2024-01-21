print("py_gowsrini2004_day_13\n")
decode = {
    0:"none",
    1:"none",
    2:"ABC",
    3:"DEF",
    4:"GHI",
    5:"JKL",
    6:"MNO",
    7:"PORS",
    8:"TUV",
    9:"WXYZ"
}

def textToNum(num):
    for i in num:
        if i.isalpha():
            for j in decode.values():
                if i in j:
                    print(list(decode.keys())[list(decode.values()).index(j)],end="")
        else:
            print(i,end='')
    print("\n")

textToNum("123-647-EYES")
textToNum("(325)444-TEST")
textToNum("653-TRY-THIS")
textToNum("435-224-7613")