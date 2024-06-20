#!/bin/bash


chmod +x $0


sudo chown -R $(whoami):$(whoami) /workspace 
sudo mkdir -p /workdir/.conan
sudo chown -R $(whoami):$(whoami) /workdir/.conan

source /workspace/.envrc

if [ ! -f "$HOME/.bashrc" ]
then
    touch "$HOME/.bashrc"
fi

sudo chown -R $(whoami):$(whoami) "$HOME/.bashrc"
echo "export CONAN_HOME=$CONAN_HOME" >> $HOME/.bashrc

source $HOME/.bashrc

conan profile detect