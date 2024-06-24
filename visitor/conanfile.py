from conan import ConanFile
from conan.tools.cmake import CMake, CMakeToolchain, CMakeDeps
from conan.tools.files import copy
import os


class Visitor(ConanFile):
    name = "visitor"
    version = "1.0"
    settings = "os", "compiler", "build_type", "arch"
    exports_sources = "*.cpp", "*.hpp", "*CMakeLists.txt", "*.robot"

    def export_sources(self):
        pass
    
    def layout(self):
        self.folders.source = "."
        self.folders.build = "build"

    def generate(self):
        tc = CMakeToolchain(self)
        tc.generate()

        deps = CMakeDeps(self)
        deps.generate

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def package(self):
        cmake = CMake(self)
        cmake.install()
        copy(self,"*",self.build_folder,self.package_folder)
        copy(self,"*",self.source_folder,self.package_folder)
        os.environ["Visitor_package"] = self.package_folder
