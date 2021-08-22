#include "CodeGen_MLIR.h"
#include "Module.h"
#include "Target.h"

#define DEBUG() std::cerr
namespace Halide {
namespace Internal {


CodeGen_MLIR::CodeGen_MLIR(std::ostream& s, const Target& t)
    : IRPrinter(s) {
}

CodeGen_MLIR::CodeGen_MLIR()
    : IRPrinter(DEBUG()) {
}

void CodeGen_MLIR::compile(const Module& M) {
}

} // namespace Internal
} // namespace Halide
