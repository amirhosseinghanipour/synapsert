from generated.ir_pb2 import Tensor, Node, Graph

def test_ir():
    tensor = Tensor(name="input", shape=[1, 3, 224, 224], dtype="float32")
    node = Node(name="conv2d_1", op_type="Conv2D", inputs=["input"], outputs=["output"])
    graph = Graph(nodes=[node], tensors={"input": tensor}, target="cuda")

    print(graph)

if __name__ == "__main__":
    test_ir()
