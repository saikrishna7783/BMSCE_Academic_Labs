# from heapq import heappush, heappop


# def dijkstra(graph, start):
#     distance = {start: 0}
#     queue = [(0, start)]
#     while queue:
#         (dist, current) = heappop(queue)
#         if current in graph:
#             for neighbor in graph[current]:
#                 new_dist = dist + graph[current][neighbor]
#                 if neighbor not in distance or new_dist < distance[neighbor]:
#                     distance[neighbor] = new_dist
#                     heappush(queue, (new_dist, neighbor))
#     return distance


# graph = {
#     'A': {'B': 1, 'C': 4},
#     'B': {'A': 1, 'C': 2, 'D': 5},
#     'C': {'A': 4, 'B': 2, 'D': 1},
#     'D': {'B': 5, 'C': 1}
# }
# start = 'B'

# result = dijkstra(graph, start)
# print("The shortest distance from", start, "to each node:", result)

import networkx as nx
import matplotlib.pyplot as plt

G = nx.Graph()
c = int(input("Enter number of edges: "))
source_ver = [1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 5]
dest_ver = [2, 3, 4, 3, 4, 5, 4, 5, 6, 5, 6, 6]
wts = [3, 5, 6, 3, 4, 7, 2, 6, 8, 2, 2, 5]
weigh = []
for i in range(0, c):
    a = source_ver[i]
    b = dest_ver[i]
    d = wts[i]
    G.add_edge(a, b, weight=d)
    source_ver.append(a)
    dest_ver.append(b)
    wts.append(d)
pos = nx.spring_layout(G)
nx.draw(G, pos, with_labels=True)
nx.draw_networkx_edge_labels(G, pos, edge_labels={(
    u, v): G[u][v]['weight'] for u, v in G.edges()})
plt.show()

shortest_path = nx.dijkstra_path(G, 1, 6)

pos2 = nx.spring_layout(G)
nx.draw(G, pos, with_labels=True)
nx.draw_networkx_edge_labels(G, pos, edge_labels={(
    u, v): G[u][v]['weight'] for u, v in G.edges()})
nx.draw_networkx_edges(G, pos, edgelist=[(shortest_path[i], shortest_path[i + 1])
                       for i in range(len(shortest_path) - 1)], edge_color='r', width=2)
plt.show()
f = 0
print(shortest_path)
j = 0
for i in range(len(source_ver)):
    if j < len(shortest_path)-1:
        if source_ver[i] == shortest_path[j] and dest_ver[i] == shortest_path[j+1]:
            weigh.append(wts[i])
            print(source_ver[i], "-", dest_ver[i], ":", wts[i])
            j += 1

print(sum(weigh))
