
cache = dict()
cache[1] = 1
cache[2] = 2
cache[4] = 3

def calc_len(start):
    """ calculates the length of the collatz sequence starting with `start` """
    if start in cache:
        return cache[start]

    length = 0

    if start % 2 == 0: # if even
        length = int(calc_len(start / 2)) + 1
    else:
        length = calc_len((3 * start) + 1) + 1

    # cache result and return it
    cache[start] = length
    return length


if __name__=="__main__":
    longest = 0
    longest_val = 0
    END = 1000000
    for i in range(1, END):
        l = calc_len(i)
        if longest < l:
            longest = l
            longest_val = i
    print("starting value of the longest chain is {}".format(longest_val))
