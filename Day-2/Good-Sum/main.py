def good_sum(N, arr):
    stk = []
    for i in range(N):
        if arr[i] > 0:
            stk.append(arr[i])
        else:
            s = 0
            while stk and s < abs(arr[i]):
                s += stk.pop()
            stk.append(abs(arr[i]))
    return sum(stk)