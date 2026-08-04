def distinct_k(n, s, k):
    freq = {}

    for ch in s:
        freq[ch] = freq.get(ch, 0) + 1

    matching_keys = [ch for ch, count in freq.items() if count == 1]

    if len(matching_keys) < k:
        return -1
    return matching_keys[k - 1]
