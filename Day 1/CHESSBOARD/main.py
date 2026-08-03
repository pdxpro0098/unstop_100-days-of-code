def determine_color(s):
    if (ord(s[0]) + (ord(s[1]))) %2==0:
        return "Black"
    return "White"
