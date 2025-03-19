#include "generated/ir.pb.h"
#include <iostream>

int main() {
    // Create a Tensor
    synapsert::Tensor tensor;
    tensor.set_name("input");
    tensor.add_shape(1);
    tensor.add_shape(3);
    tensor.add_shape(224);
    tensor.add_shape(224);
    tensor.set_dtype("float32");

    // Create a Node
    synapsert::Node node;
    node.set_name("conv2d_1");
    node.set_op_type("Conv2D");
    node.add_inputs("input");
    node.add_outputs("output");

    // Create a Graph
    synapsert::Graph graph;

    // Add nodes
    *graph.add_nodes() = node;

    // Add tensors
    (*graph.mutable_tensors())["input"] = tensor;

    // Set target
    graph.set_target("cuda");

    // Print the graph for debugging
    std::cout << graph.DebugString() << std::endl;

    return 0;
}
