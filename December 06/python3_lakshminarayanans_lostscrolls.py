"""
Module documentation: The Lost Algorithm Scrolls

This module defines a function decode_pattern to find valid pairs of words from a list of spells.

Usage:
    spell_list = ["cat", "cot", "dot", "dog", "cog", "coat", "doll"]
    output = decode_pattern(spell_list)
    print("Output:")
    print(output)
"""


def decode_pattern(spells):
    """
    Find valid pairs of words from a list of spells where each pair differs by exactly one character.

    Parameters:
        spells (list): A list of spells.

    Returns:
        list: A list of valid pairs of words.
    """
    ancient_scrolls = []
    for i in range(len(spells)):
        if i + 1 < len(spells) and spells[i + 1] is None:
            spells[i + 1] = ''
        for j in range(i + 1, len(spells)):  # Start from i + 1 to avoid duplicate pairs
            count = 0
            if len(spells[i]) == len(spells[j]):
                for k in range(len(spells[i])):
                    if spells[i][k] != spells[j][k]:
                        count += 1
                if count == 1:
                    if spells[i] not in ancient_scrolls:
                        ancient_scrolls.append(spells[i])
                    if spells[j] not in ancient_scrolls:
                        ancient_scrolls.append(spells[j])
    if ancient_scrolls:
        return ancient_scrolls
    else:
        return "No valid chain."


if __name__ == "__main__":
    # Example usage
    spell_list = ["cat", "cot", "dot", "dog", "cog", "coat", "doll"]
    output = decode_pattern(spell_list)
    print("Output:")
    print(output)
