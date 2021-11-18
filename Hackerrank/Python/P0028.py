#https://www.hackerrank.com/challenges/py-introduction-to-sets/problem


def average(array):
    heights = set(array)
    ave = sum(heights) / len(heights)
    return ave

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
