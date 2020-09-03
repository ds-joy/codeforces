def solve():
    n = int(input())

    # taking the input
    arr = []
    arr = list(map(int, input().split()))
    
    #sorting the list
    arr.sort()

    # the solution
    if (arr[n-1] - arr[0]) <= len(arr):
        print("YES")
    else:
        print("NO") 
    



def main():

    t = int(input())
    while t:
        solve()
        t -= 1


if __name__ == "__main__":
    main()