def first_word(s):
    words = s.split()
    if words:
        return words[0]
    else:
        return None

def last_word(s):
    words = s.split()
    if words:
        return words[-1]
    else:
        return None

def count_words(s):
    words = s.split()
    return len(words)


while 1:
    text = input("Enter a string: ")


    print("First word:", first_word(text))


    print("Last word:", last_word(text))


    print("Total number of words:", count_words(text))

