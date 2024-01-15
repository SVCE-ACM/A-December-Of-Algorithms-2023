walk = ['n', 's', 'n', 's', 'n', 's', 'n', 's', 'n', 's']


def walkGenerator(walk):
    vertical = 0
    horizontal = 0
    if len(walk) != 10:
        return False
    for i in walk:
        if i == "n":
            vertical += 1
        elif i == "s":
            vertical -= 1
        elif i == "e":
            horizontal += 1
        elif i == "w":
            horizontal -= 1
    if vertical == 0 and horizontal == 0:
        return True
    return False


print(walkGenerator(walk))