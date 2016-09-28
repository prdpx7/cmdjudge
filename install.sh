#!/usr/bin/env bash

if [ ! -d $HOME/.cmdjudge ]; then
    git clone https://github.com/zuck007/cmdjudge.git ~/.cmdjudge
fi

echo 'alias cmdjudge="$HOME/.cmdjudge/cmdjudge.sh"' >> ~/.bashrc
echo 'alias cmdjudge="$HOME/.cmdjudge/cmdjudge.sh"' >> ~/.zshrc

echo "Installation successful"
