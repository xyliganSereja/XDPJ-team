// Copyright (C) 2018 Intel Corporation
//
//
// SPDX-License-Identifier: Apache-2.0
//

#include <ade/graph.hpp>
#include <iostream>

int main(int argc, char *argv[]) {
  ade::Graph graph;
  std::cout << "Emtpy graph has " << graph.nodes().size()
            << " nodes. A great start!" << std::endl;
  return 0;
}
