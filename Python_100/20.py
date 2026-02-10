class genT:
    def __init__(self,n):
        self.n = n
    
    def generate(self):
        for num in range(0,self.n+1):
            if num % 7 == 0:
                yield num

gen = genT(100)
for num in gen.generate():
    print(num)

# class DivisibleBySeven:
#     def __init__(self, n):
#         self.n = n
    
#     def generate(self):
#         for num in range(0, self.n + 1):
#             if num % 7 == 0:
#                 yield num


# # Example usage
# gen = DivisibleBySeven(50)
# for num in gen.generate():
#     print(num)