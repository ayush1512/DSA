s = "hello world from chatgpt, I am a boy"
ip = list(s.split())
for idx in range(len(ip)):
    n = len(ip[idx])
    if n == 1:
        ip[idx] = ip[idx][0].upper()
    else:
        ip[idx] = ip[idx][0].upper() + ip[idx][1:n-1] + ip[idx][n-1].upper()
print(ip)

# class Solution:
#     # Function to capitalize first and last character of each word
#     def capitalizeFirstLast(self, s: str) -> str:
#         arr = list(s)
#         n = len(arr)
#         start = 0

#         # Traverse the string word by word
#         while start < n:
#             # Skip spaces
#             while start < n and arr[start] == ' ':
#                 start += 1

#             if start >= n:
#                 break

#             end = start

#             # Find the end of the current word
#             while end < n and arr[end] != ' ':
#                 end += 1

#             # Capitalize first character if lowercase
#             if arr[start].islower():
#                 arr[start] = arr[start].upper()

#             # Capitalize last character if lowercase and word length > 1
#             if end - 1 > start and arr[end - 1].islower():
#                 arr[end - 1] = arr[end - 1].upper()

#             # Move to next word
#             start = end

#         # Return modified string
#         return ''.join(arr)

# if __name__ == "__main__":
#     sol = Solution()
#     s = "hello world from chatgpt, I am a boy"
#     print(sol.capitalizeFirstLast(s))
