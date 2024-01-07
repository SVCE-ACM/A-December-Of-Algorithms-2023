directions = input().split()

def CartesianWalkValidator(directions):

    if(len(directions) == 10):
        initial = [0,0]
        for i in directions:
            if i == 'n':
                initial[1] += 1
            elif i == 'e':
                initial[0] += 1
            elif i == 'w':
                initial[0] -= 1
            elif i == 's':
                initial[1] -= 1
        if initial == [0,0]:
            return True
        else:
            return False

    else:
        return False
    
print(CartesianWalkValidator(directions))