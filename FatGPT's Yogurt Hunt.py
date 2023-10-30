# Read input values
N = int(input())
yogurt_amounts = list(map(int, input().split()))

# Find the house with the maximum yogurt quantity and farthest distance
max_yogurt = max(yogurt_amounts)
max_yogurt_house = -1

for i in range(N):
    if yogurt_amounts[i] == max_yogurt:
        if max_yogurt_house == -1 or i > max_yogurt_house:
            max_yogurt_house = i

# Output the result
print(max_yogurt_house + 1)
