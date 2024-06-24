# clone basic Ubuntu image from docker hub
FROM mohammedwaheed1994/base_image:1.0

# Switch to the vscode user
USER root

# Set the working directory in the container
WORKDIR /workspace

#update & upgrade apt
RUN apt-get update -y && sudo apt-get upgrade -y

#install python
RUN sudo apt-get install -y python3 python3-pip

#install cmake
RUN sudo apt-get install -y cmake

#install curl
RUN sudo apt-get install -y curl

#install vim
RUN sudo apt-get install vim -y

# Create a Python virtual environment and install Conan
RUN sudo pip3 install --break-system-packages conan

#install rebot frame work for testing
RUN sudo pip3 install robotframework --break-system-packages

#install bazel
#install Bazelisk
RUN sudo curl -Lo /usr/local/bin/bazel https://github.com/bazelbuild/bazelisk/releases/download/v1.11.0/bazelisk-linux-arm64 \
    && sudo chmod +x /usr/local/bin/bazel  \
    && sudo bazel

# Switch to the vscode user
USER mwaheed

# Set the default command to run when starting the container
CMD ["/bin/sh"]