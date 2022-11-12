import math

def getPrimes(limit):
    primes = [1] * (limit + 1)
    primes[0] = 0
    primes[1] = 0

    for i in range(2, math.ceil(math.sqrt(limit))):
        k = 0
        while True:
            j = i**2 + (k*i)
            if j > limit:
                break
            
            primes[j] = 0
            k += 1
    
    return primes

def listPrimes(primes):
    p = []
    for i in range(len(primes)):
        if primes[i]:
            p.append(i)
    return p
            


def main():
    n = 600_851_475_143
    primes = getPrimes(math.ceil(math.sqrt(n)))
    listP = listPrimes(primes)

    for i in range(len(listP) - 1, 0, -1):
        if n % listP[i] == 0:
            print(listP[i])
            break

    print(6857 in listP, len(listP))





if __name__ == '__main__':
    main()