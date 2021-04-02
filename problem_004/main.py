def is_pal(n):
    return str(n) == str(n)[::-1]

def products():
    for a in range(999,100,-1):
        for b in range(999,100,-1):
            yield a*b

print(max([i for i in products() if is_pal(i)]))
