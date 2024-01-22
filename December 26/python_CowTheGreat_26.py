linked_list_str = "1 -> 2 -> 3 -> 4 -> 5 -> None"
elements_str = linked_list_str.replace(" -> None", "").split(" -> ")
nodes = [int(e) if e != "NONE" else None for e in elements_str]
visited_nodes = []
for i in nodes:
    if i in visited_nodes:
        print("Cycle Found")
        flag = 0
        break
    else:
        visited_nodes.append(i)
        flag = 1

if flag==1:
    print("No Cycle Found")