//
// Created by beloin on 16/06/2022.
//

#include "string"
#include "JsonExporterVisitor.h"

std::string JsonExporterVisitor::exportGraph(Graph *graph) {
    std::string jsonString = "{";

    jsonString += "\"edges\":";
    jsonString += std::to_string(graph->getEdgeCount()) + ",";

    jsonString += "\"nodes\":";
    jsonString += std::to_string(graph->getNodeCount());

    jsonString += "}";

    return jsonString;
}

std::string JsonExporterVisitor::exportQueue(Queue *queue) {
    std::string jsonString = "{";

    jsonString += "\"itemCount\":";
    jsonString += std::to_string(queue->getItemCount()) + ",";

    jsonString += "\"fistItem\":";
    jsonString += std::to_string(queue->getFistItem());

    jsonString += "}";

    return jsonString;
}

std::string JsonExporterVisitor::exportStack(Stack *stack) {
    std::string jsonString = "{";

    jsonString += "\"itemCount\":";
    jsonString += std::to_string(stack->getItemCount()) + ",";

    jsonString += "\"topItem\":";
    jsonString += std::to_string(stack->getTopItem());

    jsonString += "}";

    return jsonString;
}
