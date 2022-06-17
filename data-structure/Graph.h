//
// Created by beloin on 16/06/2022.
//

#ifndef VISITOR_GRAPH_H
#define VISITOR_GRAPH_H


#include "DataStructure.h"

class Graph : public DataStructure {
private:
    int nodeCount;
    int edgeCount;
public:
    Graph(int nodeCount, int edgeCount);

    int getNodeCount() const;
    int getEdgeCount() const;

    void accept(ExportVisitor* visitor) override;
};


#endif //VISITOR_GRAPH_H
