#!/usr/bin/env bash

if [ ! -d $HOME/.cmdjudge ]; then
    git clone https://github.com/zuck007/cmdjudge.git ~/.cmdjudge
    echo 'alias cmdjudge="$HOME/.cmdjudge/cmdjudge"' >> ~/.bashrc
    echo 'alias cmdjudge="$HOME/.cmdjudge/cmdjudge"' >> ~/.zshrc

    echo "cmdjudge Installed successfully !!(its just an alias bruh)"
else
    cd ~/.cmdjudge && git pull origin master && cd -
    echo "Updated cmdjudge!!!"
fi

