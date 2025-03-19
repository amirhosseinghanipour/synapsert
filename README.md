# SynapseRT
**A Hardware-Agnostic Compute Abstraction Machine Learning Runtime (In Development)**

SynapseRT is an upcoming framework designed to convert, optimize, and execute machine learning models across GPUs, TPUs, CPUs, and edge devices. It's currently under active development built from the ground up for flexibility and performance.

## Vision
- Universal Models: Seamlessly convert PyTorch, TensorFlow, and ONNX models to a unified IR.
- Real Optimizations: Kernel fusion, INT8/FP16 quantization, and auto-tuning.
- Everywhere Execution: CUDA GPUs, TPU/XLA, ARM NEON edge devices, and CPU vectorization.
- Secure by Design: Future support for homomorphic encryption.

## Current Status
🚧 Work in Progress 🚧
- IR: Designing an MLIR-based intermediate representation.
- Frontends: PyTorch conversion via torch.fx in early stages.
- Backends: CUDA kernel prototypes underway.
- CLI: Basic convert, optimize, run commands being built.

## Planned Features
- Conversion: Full support for PyTorch, TensorFlow, and possibly ONNX.
- Compiler: MLIR passes for fusion and quantization.
- Runtime: Low-latency execution with Python/C++ bindings.
- Benchmarks: Targeting >15% speedup over native frameworks.

## Get Involved
SynapseRT is pre-alpha and open for contributors! As a solo dev on a pretty much low-resource laptop, I would appreciate any contribution you could possibly do to the next-gen ML runtime.
- Chat: Open an issue to discuss ideas or join development.
- Contribute: See CONTRIBUTING.md (coming soon).
