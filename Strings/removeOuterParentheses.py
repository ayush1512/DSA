def removeOuterParentheses(s: str) -> str:
        res = ""
        l = 0
        for c in s:
            if c == '(':
                if l>0:
                    res += c
                l+=1
            elif c == ')':
                l-=1
                if l>0:
                    res += c
        return res
        
s = "(()()((())))"
print(removeOuterParentheses(s))
