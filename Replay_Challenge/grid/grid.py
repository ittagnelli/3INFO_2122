from tkinter import N
from xxlimited import new


grid = [
    [0, 1, 0, 0],
    [0, 0, 0, 1],
    [0, 0, 2, 0],
    [1, 0, 0, 0]
]


coord = [
    [1, 0],
    [3, 1],
    [0, 3],
    [2, 2]
]

def distance(x1, y1, x2, y2):
    return abs((x1 - x2))  + abs((y1 - y2))

def find_next_hop(x, y, grid, coord):
    new_coord = coord
    for i in range(len(coord)):
        if new_coord[i] == [x, y]:
            break
    new_coord.pop(i)

    distances = []
    set_distances = set()
    for cord in new_coord:
        distances.append(distance(x, y, cord[0], cord[1]))
    [set_distances.add(item) for item in distances]

    min_target_x = len(coord) 
    min_distance = min(distances)
    if len(set_distances) == len(distances):
        for i in range(len(distances)):
            if distances[i] == min_distance:
                target = new_coord[i]
    else:
        for i in range(len(distances)):
            if distances[i] == min_distance:
                if new_coord[i][0] <= min_target_x:
                    min_target_x = i
        target = new_coord[min_target_x]
    return target


print(find_next_hop(2, 2, grid, coord))

