import math

def closest_pair(points):
    min_dist = float('inf')

    for i in range(len(points)):
        for j in range(i + 1, len(points)):
            x1, y1 = points[i]
            x2, y2 = points[j]

            # Calculate Euclidean distance
            dist = math.sqrt((x1 - x2)**2 + (y1 - y2)**2)

            # Compare with minimum distance found so far
            if dist < min_dist:   # Corrected condition
                min_dist = dist

    return min_dist

# User Input
n = int(input("Enter number of points: "))

points = []
print("Enter x and y coordinates:")

for i in range(n):
    x, y = map(int, input().split())
    points.append((x, y))

result = closest_pair(points)

print("Minimum distance:", result)
OUTPUT-
Enter number of points: 3
Enter x and y coordinates:
1 2
4 6
5 7
Minimum distance: 1.4142135623730951
