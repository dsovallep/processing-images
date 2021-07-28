n = 600851475143
i = 1
p = []
f = []


while i <= n:
    if (n%i) == 0:
        p.append(i)       
    i = i + 1
for q in p:
    s = 0
    k = 1
    while k <= q:
        if (q%k) == 0:
            s = s + 1  
        k = k + 1
    if (s == 2):
        f.append(q)
print(f[-1])