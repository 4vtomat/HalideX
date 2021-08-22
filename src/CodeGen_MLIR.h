#ifndef CODEGEN_MLIR_H
#define CODEGEN_MLIR_H

#include "IRPrinter.h"
namespace Halide {

namespace Internal {

class CodeGen_MLIR : public IRPrinter {
public:
  CodeGen_MLIR();
  CodeGen_MLIR(std::ostream&, const Target&);
  ~CodeGen_MLIR() override = default;

  void compile(const Module& M);

};

} // namespace Internal
} // namespace Halide

#endif
