/*
 * Copyright 2021 kenney
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "Camera.h"
#include "Node.h"
#include <functional>

namespace triangle
{

  class Scene
  {

  public:
    void addNode(const std::shared_ptr<Node> &node);
    void traverse(
        const std::function<void(std::shared_ptr<Node> node)> &nodeProcessor);

  private:
    void traverseInternal(
        const std::shared_ptr<Node> &node,
        const std::function<void(std::shared_ptr<Node> node)> &nodeProcessor);
    std::vector<std::shared_ptr<Node>> nodes_;
  };

} // namespace triangle