n = int(input())
s = list(input())
q = int(input())
check = 1
#print(s)
while q:
    tt, a, b = map(int, input().split())
    if tt == 1:
        if check == -1:
            if a <= n:
                a += n
            else:
                a -= n
            if b <= n:
                b += n
            else:
                b -= n
        a -= 1
        b -= 1
        s[a], s[b] = s[b], s[a]
    elif tt == 2:
        check *= (-1)
    q -= 1

if check == -1:
    s = s[n:] + s[:n]
print(''.join(s))