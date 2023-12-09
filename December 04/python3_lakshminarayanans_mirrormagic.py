def find_palindromic_substring2(name):
    length = len(name)

    for i in range(length):
        for j in range(i + 1, length + 1):
            substring = name[i:j]
            if substring == substring[::-1] and len(substring) > 1:
                return substring
    return "Error"
def find_palindromic_substring(name):
    length = len(name)

    for i in range(length):
        for j in range(i + 1, length + 1):
            substring = name[i:j]
            if substring == substring[::-1] and len(substring) > 1:
                return substring
    return "Error"


# Example Usage
input_name_1 = "Hollow"
output_1 = find_palindromic_substring(input_name_1)
print("Input:", input_name_1)
print("Output:", output_1)

input_name_2 = "Master"
output_2 = find_palindromic_substring(input_name_2)
print("\nInput:", input_name_2)
print("Output:", output_2)