for i in range(int(input())):
    n,x=list(map(int,input().split()))
    l=list(map(int,input().split()))
    for i in l:
        if i%x==0:
            for j in range(x):
                l.append(i//x)
        else:
           break
    print(sum(l))