from conan import ConanFile, tools
from conan.tools.cmake import CMake, CMakeToolchain, CMakeDeps
import os

class VisitorTest(ConanFile):
    settings = "os", "compiler", "build_type", "arch"

    def requirements(self):
        self.requires(self.tested_reference_str)

    def build(self):
        pass

    def test(self): 
        os.chdir(os.environ.get("Visitor_package"))
        self.run(f"robot ./test_package/visitor_test.robot")
