"""
Module documentation: Riddle Me This

This module defines functions for decrypting a Caesar cipher and finding the original message.

Functions:
    - decrypt_caesar_cipher(ciphertext, shift): Decrypts a Caesar cipher.
    - find_bomb_location(code, shift): Finds the original message by trying different shifts.

Usage:
    - Enter the code and shift when prompted to find the decrypted message.
"""


def decrypt_caesar_cipher(ciphertext, shift):
    """
    Decrypt a Caesar cipher.

    Parameters:
        ciphertext (str): The encrypted message.
        shift (int): The number of positions to shift the characters.

    Returns:
        str: The decrypted message.
    """
    decrypted_text = ""
    for char in ciphertext:
        if char.isalpha():
            if char.islower():
                decrypted_text += chr((ord(char) - shift - ord('a') + 26) % 26 + ord('a'))
            else:
                decrypted_text += chr((ord(char) - shift - ord('A') + 26) % 26 + ord('A'))
        else:
            decrypted_text += char
    return decrypted_text


def find_bomb_location(code, shift):
    """
    Find the original message by trying different shifts.

    Parameters:
        code (str): The encrypted message.
        shift (int): The maximum number of positions to try for decryption.

    Returns:
        decrypted_message (str): The decrypted message.
    """
    for s in range(shift+1):
        decrypted_message = decrypt_caesar_cipher(code, s)
    return decrypted_message


if __name__ == "__main__":
    code = input("Enter code: ").upper()
    shift = int(input("Enter shift: "))
    message = find_bomb_location(code, shift)
    print(f"The Bomb location is: {message} - Shift {shift}")
