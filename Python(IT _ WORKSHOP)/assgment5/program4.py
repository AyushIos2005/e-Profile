# D
first_set = set(map(int, input("Enter elements of first set (space separated): ").split()))
second_set = set(map(int, input("Enter elements of second set (space separated): ").split()))

print("First set is subset of second set -", first_set.issubset(second_set))
print("Second set is subset of First set -", second_set.issubset(first_set))
print("First set is superset of second set -", first_set.issuperset(second_set))
print("Second set is superset of First set -", second_set.issuperset(first_set))

if first_set.issubset(second_set):
    first_set.clear()
if second_set.issubset(first_set):
    second_set.clear()

print("First Set:", first_set)
print("Second Set:", second_set)
