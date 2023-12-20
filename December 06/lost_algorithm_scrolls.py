words = list(map(lambda x : x.strip()[1 : -1], input().strip()[1 : -1].split(',')))
output = []
for i in range(len(words) - 1):
    first_word = words[i]
    second_word = words[i + 1]
    len_first_word = len(first_word)
    len_second_word = len(second_word)

    if len_first_word - len_second_word == -1:
        sim = 0
        for j in range(len_first_word):
            if first_word[j] in second_word:
                sim += 1
            elif first_word[j] not in second_word:
                break
        if sim == len_first_word:
            if first_word not in output:
                output.append(first_word)
            output.append(second_word)

    elif len_first_word - len_second_word == 0:
        diff = 0
        for j in range(len_first_word):
            if first_word[j] in second_word:
                continue
            elif first_word[j] not in second_word:
                diff += 1
        if diff < 2:
            if first_word not in output:
                output.append(first_word)
            output.append(second_word)


    elif len_first_word - len_second_word == 1:
        sim = 0
        for j in range(len_second_word):
            if second_word[j] in first_word:
                continue
            elif second_word[j] not in first_word:
                break
        if sim == len_second_word:
            if first_word not in output:
                output.append(first_word)
            output.append(second_word)

if output == []:
    print("No valid chain.")
else:
    print(output)
