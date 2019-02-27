# Lines configured by zsh-newuser-install
HISTFILE=~/.histfile
HISTSIZE=1000
SAVEHIST=1000
unsetopt beep
bindkey -v
# End of lines configured by zsh-newuser-install
# The following lines were added by compinstall
zstyle :compinstall filename '/home/deditionis/.zshrc'

autoload -Uz compinit
compinit
# End of lines added by compinstall
#
# User created settings
autoload -Uz promptinit
promptinit
#prompt adam2

alias sshj='ssh jackyw@babbage8.computing.clemson.edu'
alias la='ls -a'
alias ll='ls -al'

# Pywal
# Import colorscheme from 'wal' asynchronously
# &   # Run the process in the background.
# ( ) # Hide shell job control messages.
# (cat ~/.cache/wal/sequences &)

# Alternative (blocks terminal for 0-3ms)
# cat ~/.cache/wal/sequences

# To add support for TTYs this line can be optionally added.
# source ~/.cache/wal/colors-tty.sh

# Powerline
powerline-daemon -q
POWERLINE_BASH_CONTINUATION=1
POWERLINE_BASH_SELECT=1
. /usr/lib/python3.7/site-packages/powerline/bindings/zsh/powerline.zsh

# Wallpapers
# (cat ~/.config/wpg/sequences &)

# Setting default text editor
export VISUAL=vim
export EDITOR="$VISUAL"
