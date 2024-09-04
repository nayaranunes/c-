# In an alien language, surprisingly, they also use English lowercase letters, but possibly in a different order.
# The order of the alphabet is some permutation of lowercase letters.
# Given a sequence of words written in the alien language, and the order of the alphabet,
# return true if and only if the given words are sorted lexicographically in this alien language
# Input: words = ["hello", "uber"], order = "huabcdefgiiklmnoparstvwxyz"
# Output: true
# Input: words = ["word", "world', "row", order = "worldabcefghijkmnpgstuvxyz"
# Output: false


def is_alien_sorted(words, order):
    # Step 1: Create a dictionary to map each character to its order index
    order_index = {}

    for index, char in enumerate(order):
        order_index[char] = index

    # Step 2: Function to convert a word to its alien order indices
    def alien_order(word):
        indices = []
        for char in word:
            # Get the index of each character based on the alien dictionary
            indices.append(order_index[char])
        return indices

    # Step 3: Compare each word with the next word in the list
    for i in range(len(words) - 1):
        # Convert both words to their alien order index lists
        current_word_indices = alien_order(words[i])
        next_word_indices = alien_order(words[i + 1])

        # Step 4: If the current word is greater than the next word in alien order, return False
        if current_word_indices > next_word_indices:
            return False

    # Step 5: If all words are in the correct order, return True
    return True

# Test Cases


if __name__ == '__main__':
    print(is_alien_sorted(["hello", "uber"], "huabcdefgiiklmnoparstvwxyz"))
    print(is_alien_sorted(["hello", "uber"], "huabcdefgiiklmnoparstvwxyz"))  # Output: True
    print(is_alien_sorted(["word", "world", "row"], "worldabcefghijkmnpgstuvxyz"))  # Output: False
