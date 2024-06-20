# clone basic Ubuntu image from docker hub
FROM mohammedwaheed1994/base_image:1.0

# Set the working directory in the container
WORKDIR /workspace

#update & upgrade apt
RUN sudo apt-get update -y && sudo apt-get upgrade -y

#install python
RUN sudo apt-get install -y python3 python3-pip

#install cmake
RUN sudo apt-get install -y cmake

#install curl
RUN sudo apt-get install -y curl

# Create a Python virtual environment and install Conan
RUN sudo pip3 install --break-system-packages conan

#install bazel
# Install Bazelisk
RUN sudo curl -Lo /usr/local/bin/bazel https://github.com/bazelbuild/bazelisk/releases/download/v1.11.0/bazelisk-linux-arm64 \
    && sudo chmod +x /usr/local/bin/bazel  \
    && sudo bazel

RUN conan profile detect

# Switch to the vscode user
USER mwaheed