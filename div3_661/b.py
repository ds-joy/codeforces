
def solve():
    n = int(input())

    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    a_min = min(a)
    b_min = min(b)

    cost = 0

    for i in range(n):
        cost += max(a[i] - a_min, b[i] - b_min)
    
    print(cost)



def main():
    t = int(input())
    while t:
        solve()
        t -= 1

if __name__ == "__main__":
    main()