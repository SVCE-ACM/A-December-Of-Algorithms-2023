def find_path(path):
    b = [0, 0]
    c = 0
    for i in path:
        c += 1
        if i == 'n':
            b = [b[0], b[1] + 1]
        elif i == 'e':
            b = [b[0] + 1, b[1]]
        elif i == 's':
            b = [b[0], b[1] - 1]
        else:
            b = [b[0] - 1, b[1]]
    if c == 10:
        if b == [0,0]:
            print("True")
        else:
            print("False")
    else:
        print("False")

path = input().split()
find_path(path)
