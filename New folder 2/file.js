// Function to perform BFS traversal on the graph
function bfsTraversal(graph, startNode) {
    // Create a queue for BFS
    const queue = [];
    
    // Keep track of visited nodes
    const visited = new Set();

    // Start from the initial node
    queue.push(startNode);
    visited.add(startNode);

    // Traverse while there are nodes in the queue
    while (queue.length > 0) {
        // Dequeue a node from the front
        const currentNode = queue.shift();
        console.log(currentNode); // Print the current node

        // Get the adjacent nodes of the current node
        const neighbors = graph[currentNode];
        
        // Traverse all neighbors of the current node
        for (let i = 0; i < neighbors.length; i++) {
            const neighbor = neighbors[i];

            // If the neighbor has not been visited, mark it visited and enqueue it
            if (!visited.has(neighbor)) {
                visited.add(neighbor);
                queue.push(neighbor);
            }
        }
    }
}

// Example usage:
// Adjacency list representation of a graph
const graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []
};

// Starting node for BFS
const startNode = 'A';

// Perform BFS traversal
console.log("BFS Traversal:");
bfsTraversal(graph, startNode);
