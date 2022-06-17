//
// Created by beloin on 16/06/2022.
//

#include "Graph.h"

int Graph::getNodeCount() const {
    return nodeCount;
}

int Graph::getEdgeCount() const {
    return edgeCount;
}

Graph::Graph(int nodeCount, int edgeCount) : nodeCount(nodeCount), edgeCount(edgeCount) {}

void Graph::accept(ExportVisitor* visitor) {
    visitor->exportGraph(this);
}
