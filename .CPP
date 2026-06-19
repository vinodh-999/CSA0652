def pair_sum(arr, target):
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):  # Avoid redundant comparisons
            if arr[i] + arr[j] == target:
                return (i, j)
    return None

# User Input
n = int(input("Enter number of elements: "))

arr = []
print("Enter the elements:")
for i in range(n):
    arr.append(int(input()))

target = int(input("Enter target sum: "))

result = pair_sum(arr, target)

if result:
    print("Pair found at indices:", result)
else:
    print("No pair found")
OUTPUT-
Enter number of elements: 4
Enter the elements:
7
2
6
12
Enter target sum: 9
Pair found at indices: (0, 1)
