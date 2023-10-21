s = input()
s = s[::-1]

print("Reversed String:", s)

i = 0
res = ""

while i < len(s) - 1:
    x = s[i] + s[i + 1]

    if x == "32":
        res += " "
    elif int(x) in range(65, 91) or int(x) in range(97, 100):
        res += chr(int(x))

    elif i + 2 < len(s):
        x = x + s[i + 2]
        res += chr(int(x))
        i += 1

    i += 2

print(res)




for j in range(1, len(res), 2):
    if res[j] != ' ':
        print(res[j], end="")




# Test Cases

# Input: "483710100111176"
# Expected Output: 
# Reversed String: 671111001017384
#CodeIT
#oeT


# Input: "11180180110127"
# Expected Output: 
#Reversed String: 72101108108111
#Hello
#el


# Input: "09"
# Expected Output: 
# Reversed String: 90
# Z

# Input: "79"
# Expected Output: 
# Reversed String: 97
# a

# Input: "56"
# Expected Output: 
# Reversed String: 65
# A

# Input: "221"
# Expected Output: 
# Reversed String: 122
# z

# Input: "010117990156"
# Expected Output: 
# Reversed String: 651099711010
# Aman
# mn

# Input: "51171141150168237901111141111176"
# Expected Output: 
# Reversed String: 67111114111110973286105114117115
# Corona Virus
# ooaVrs


