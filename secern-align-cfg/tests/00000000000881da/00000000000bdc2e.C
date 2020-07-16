t = int(input())
for i in range(0, t):
    n = int(input())
    string = input()
    for element in string:
        if element == 'S':
            print("E",end="")
        elif element == 'E':
            print("S",end="")