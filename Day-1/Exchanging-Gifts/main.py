def find_youngest_member(n, m, gifts):
    if m == 0:
        return n

    count = {}

    for _, receiver in gifts:
        count[receiver] = count.get(receiver, 0) + 1

    for member, received in count.items():
        if received == n - 1:
            return member

    return -1