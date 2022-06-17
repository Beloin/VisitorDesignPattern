cmake_minimum_required(VERSION 3.10)
project(visitor)

set(CMAKE_CXX_STANDARD 14)

include_directories(data-structure)

add_executable(visitor
        data-structure/DataStructure.h data-structure-visitors/ExportVisitor.h main.cpp data-structure/Graph.cpp data-structure/Graph.h data-structure/Queue.cpp data-structure/Queue.h data-structure/Stack.cpp data-structure/Stack.h data-structure-visitors/JsonExporterVisitor.cpp data-structure-visitors/JsonExporterVisitor.h)
