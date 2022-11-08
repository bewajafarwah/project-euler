limit = 1000

def find_total_div(n):
    p = limit // n
    return int(n * ((p * (p + 1)) / 2))

def main(): 

    sum_of_3 = find_total_div(3)
    sum_of_5 = find_total_div(5)
    sum_of_15 = find_total_div(15)

    print(sum_of_3 + sum_of_5 - sum_of_15)


if __name__ == '__main__':
    main()