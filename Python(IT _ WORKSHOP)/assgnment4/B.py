#WAP to show all common words between two lists of words.
st1 =input('Enter a sentence 1 : ')
st2 =input('Enter a sentence 2 : ')

words1=set(st1.split())
words2=set(st2.split())

common_words = words1 & words2

if common_words:
    print('Common words are : ', common_words)

else:
    print('Oops !!')        