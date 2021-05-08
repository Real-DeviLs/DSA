#To compute a ^ n, this code runs in O(log n) instead of O(n)

def BinaryExpo(a, n):
    if n == 0:
        return(1)
    res = BinaryExpo(a, n // 2)
    if n % 2 == 1:
        return(res * res * a)
    else:
        return(res * res)

#Main method 
a, n = [int(x) for x in input().split()]
print(BinaryExpo(a, n))

#input: 2 3
#output: 8
