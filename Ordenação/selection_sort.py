def find_min(v):
    min = v[0]
    min_i = 0

    for i in range(1, len(v)):
        if v[i] < min:
            min = v[i]
            min_i = i
    
    return min_i


def select_sort(v):
    new_v = []
    for i in range(len(v)):
        min = find_min(v)
        new_v.append(v.pop(min));
    
    return new_v


print(select_sort([1,3,5,10,9]));