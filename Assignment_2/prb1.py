def fibonacci(n):
    a=0
    b=1
    print(a,'',b,'', end='')
    while a+b<=n:
        c=a+b
        a=b
        b=c
        print(c,'',end='')

n=100
print("Fibonacci Series: ")
fibonacci(n)