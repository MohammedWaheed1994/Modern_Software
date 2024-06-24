#!/bin/bash


chmod +x $0


sudo chown -R $(whoami):$(whoami) /workspace 
sudo mkdir -p /workdir/.conan2
sudo chown -R $(whoami):$(whoami) /workdir/.conan2

source /workspace/.envrc

if [ ! -f "$HOME/.bashrc" ]
then
    touch "$HOME/.bashrc"
fi

if [ ! -f "$HOME//.profile" ]
then
    touch "$HOME//.profile"
fi

sudo chown -R $(whoami):$(whoami) "$HOME/.bashrc"
echo "export CONAN_HOME=$CONAN_HOME" >> $HOME/.bashrc
sudo chown -R $(whoami):$(whoami) "$HOME/.profile"
echo "export CONAN_HOME=$CONAN_HOME" >> $HOME/.profile

source $HOME/.bashrc
source $HOME/.profile

conan profile detect