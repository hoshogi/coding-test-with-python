n, m, k = map(int, input().split())
nums = list(map(int, input().split()))
nums.sort(reverse=True)
count = 0
sum = 0

for _ in range(m):
    if count == k:
        sum += nums[1]
        count = 0
    else:
        sum += nums[0]
        count += 1

print(sum)