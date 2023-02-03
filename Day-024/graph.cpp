// graph is defined as collection of vertices and edges
// G = (V, E)

// types of graph

// directed/digraph graph - directed edges
// the number of edges going out of a vertex is called out degree of vertex
// the number of edges going in vertex is called out degree of vertex

// undirected graph - non-directed edges
// the number of edges connect the vertex is called degree of vertex (counted for both)

// if their are edges connecting same vertex, then it is called as self loop
// if their are multiple edges connecting the same vertex, then it is called as parallel loop
// if their are two vertex connected by an edge, then they are called as adjacent vertex

// the graph having no self loop/parallel edge is called simple graph
// if their are multiple pieces of graph then, it is called non-connected graph
// if their are multiple pieces of graph but they are connected by an edge then, it is called connected graph (connected component)
// if their are any vertex in the graph whose removal leave the graph into two component, then those vertex are called articulation point
// if the graph cannot be broken into component by removal of one vertex they it called biconnected componenet
// if form any vertex we can reach all other vertex this means their is a path of between every pair of vertex, if directed graph satisfaying this property then the graph is called strongly connected
// in non-directed graph we use term connected as we can reach every node, but in directed graph we use term strongly connected

// path is a set of vertex which are connecting pair of vertex
// if we start from any vertex and after traversing reach the start vertex, then it is called cycle
// cycle is a circular path or circuit (start from one vertex and ending from same vertex)

// directed acyclic graph (DAG) - their is no cycle, so we cannot reach the same vertex at any way
// we can arrange all the vertex linearly in a singlle line such that the edge are going in forward direction, if we can arrange in such manner then it is called topological ordering of vertex ,this is only possible in DAG