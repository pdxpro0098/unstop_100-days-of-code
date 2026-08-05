def find_youngest_member(n, m, gifts):
    if m == 0:
         return n
    table = {}
    for gift in gifts:
        if gift[1] in table:
            table[gift[1]] += 1
        else:
            table[gift[1]] = 1

    table = dict(sorted(table.items(), key=lambda item: item[1], reverse=True))
    lst = list(table.items())
    
    if lst[0][1] == n - 1:
        return lst[0][0]
    return -1