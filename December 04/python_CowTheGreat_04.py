def find_smallest_palindromic_substring(s):
    n = len(s)
    global count
    count = len(s)
    is_palindrome = [[False] * n for _ in range(n)]

    # All substrings of length 1 are palindromic
    for i in range(n):
        is_palindrome[i][i] = True

    start  = 0
    min_length = n

    # Check substrings of length 2
    for i in range(n - 2 + 1):
        if s[i] == s[i + 1]:
            is_palindrome[i][i + 1] = True
            start = i
            min_length = 2
            count+=1

    # Check substrings of length 3 and above
    for length in range(3, n + 1):
        for i in range(n - length + 1):
            j = i + length - 1
            if s[i] == s[j] and is_palindrome[i + 1][j - 1]:
                is_palindrome[i][j] = True
                if length < min_length:
                    start = i
                    min_length = length
                    count+=1

    
    #print(is_palindrome)
    return s[start:start + min_length]

word = input("Enter the string")
count = 0
result = find_smallest_palindromic_substring(word)
if count == len(word):
    print("Error")
else:
    print(f"The answer to the riddle is: {result}")
