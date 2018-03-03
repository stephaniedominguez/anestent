#ifndef MODEL_LOADER_H
#define MODEL_LOADER_H

#include "../scene/SceneObject.h"

#include <memory>
#include <string>
#include <vector>

class ModelLoader {
 public:
  static std::shared_ptr<SceneObject> LoadTXT(std::string fileName);
  static std::shared_ptr<SceneObject> LoadXML(std::string fileName);
  static std::shared_ptr<SceneObject> Load(std::string fileName);
  static std::shared_ptr<SceneObject> Load(
      std::vector<std::vector<double> > puntos, std::string name = "strip");
  static std::shared_ptr<SceneObject> LoadSoftBody(std::string fileName);
};
#endif