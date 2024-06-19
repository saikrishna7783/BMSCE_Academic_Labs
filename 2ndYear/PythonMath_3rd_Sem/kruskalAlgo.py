def find(parent, i):
    if parent[i] == i:
        return i
    return find(parent, parent[i])


def union(parent, rank, x, y):
    rootx = find(parent, x)
    rooty = find(parent, y)

    if rootx != rooty:
        if rank[rootx] < rank[rooty]:
            parent[rootx] = rooty
        elif rank[rootx] > rank[rooty]:
            parent[rooty] = rootx
        else:
            parent[rooty] = rootx
            rank[rootx] += 1


def kruskal(graph, V):
    result = []
    i = 0
    e = 0
    graph = sorted(graph, key=lambda item: item[2])
    parent = []
    rank = []
    for node in range(V):
        parent.append(node)
        rank.append(0)

    while e < V - 1:
        u, v, w = graph[i]
        i = i + 1
        x = find(parent, u)
        y = find(parent, v)

        if x != y:
            e = e + 1
            result.append([u, v, w])
            union(parent, rank, x, y)
    return result


V = 7
E = 12
graph = [[0, 1, 5],
         [1, 4, 2],
         [4, 6, 4],
         [1, 2, 4],
         [4, 5, 3],
         [6, 5, 4],
         [5, 2, 6],
         [2, 0, 3],
         [1, 3, 6],
         [4, 3, 6],
         [6, 3, 6],
         [2, 3, 6],
         ]

result = kruskal(graph, V)

for u, v, weight in result:
    print("%d - %d: %d" % (u, v, weight))

# import networkx as nx
# import matplotlib.pyplot as plt

# G = nx.Graph()
# c = int(input("Enter edge number: "))
# source_ver = [1, 1, 1, 2, 3, 3, 4, 4, 4, 6, 6, 7]
# dest_ver = [3, 4, 2, 5, 4, 6, 2, 5, 7, 7, 4, 5]
# wts = [4, 1, 3, 10, 2, 5, 3, 7, 4, 1, 8, 6]
# for i in range(0, c):
#     a = source_ver[i]
#     b = dest_ver[i]
#     d = wts[i]
#     G.add_edge(a, b, weight=d)
#     source_ver.append(a)
#     dest_ver.append(b)
#     wts.append(d)
# pos = nx.spring_layout(G)
# nx.draw(G, pos, with_labels=True)
# nx.draw_networkx_edge_labels(G, pos, edge_labels={(
#     u, v): G[u][v]['weight'] for u, v in G.edges()})
# plt.show()

# mst = nx.minimum_spanning_tree(G)
# pos2 = nx.spring_layout(mst)
# nx.draw(mst, pos2, with_labels=True)
# nx.draw_networkx_edge_labels(mst, pos2, edge_labels={(
#     u, v): mst[u][v]['weight'] for u, v in mst.edges()})
# plt.show()
# f = 0
# for u, v in mst.edges():
#     f += mst[u][v]['weight']
#     print(u, "-", v, ":", mst[u][v]['weight'])
# print(f)
