# dotfiles
dotfiles for personal use. dotfiles are custom user configuration files.
They usually start with a period, hence the name. I've included reasoning as to why I use what.

I use i3 on Antergos with Xfce4 programs as needed. Running on a Thinkpad X1 Carbon (gen. 5).

Always improving for better looks and productivity. Always learning.

# Previews
To be created.

# Current dots

## i3(gaps)
### Notes
i3 was introduced to me by my friend who recommended it because of the large user base, 
ease of customization, and productivity. It's the first one I tried and I haven't had a 
reason to switch.

I use i3gaps because of aesthetics.

I rebound the movement keys to Vim's hjkl instead of the default jkl;.

I used [Alex's guide](http://flux242.blogspot.com/2015/10/using-i3-tiling-window-manager-with.html)
to ensure that I could use i3 and Xfce services together somewhat smoothly. 

There was a bug with the xfce4-panel and using the Windows button as `$mod'. I figured it out
[here](https://forum.antergos.com/topic/10809/no-running-instance-of-xfce4-panel-was-found/3).

I Googled the rest.
### Installation
```
pacman -S i3-gaps
```

## neofetch
### Notes
neofetch displays system information in a nice manner and is relatively configurable.
### Installation
```
pacman -S neofetch
```

## polybar
### Notes
I saw on r/unixporn that a lot of people used polybar, so I decided to try it out.
polybar is a fast and easy to use status bar, as well as very customizable.
### Installation
```
pacaur -S polybar
```

## termite
### Notes
Again, I saw some pretty screenshots on r/unixporn. termite aims to be used within a WM
with tiling support and has similar keybindings to Vim, so that fits me perfectly.

I still haven't learned most of termite, but there is a lot for me to learn.
### Installation
```
pacman -S termite
```

## vim
### Notes
It's Vim.
### Installation
```
pacman -S vim
```

## zsh
### Notes
Much like termite, I haven't learned most of zsh. 
For now, it is bash with tab completion and pretty prompts.
### Installation
```
pacman -S zsh
```
Use `zsh` to run zsh-newuser-install.
#### Replace bash with zsh
Move the code you want to save (e.g. aliases and prompt) to ~/.zshrc.

Assuming zsh is installed correctly,
```
chsh -s /bin/zsh
```

# Other Programs
## pywal
### Notes
I change my background image a lot and I don't have good color sense, so I use pywal to solve this.
pywal can change the color scheme of your entire system with one terminal line based on a
specified background. It's really great.
### Installation
```
pacman -S python-pywal
```
Also, select wal under xfce4-appearance-settings > style.
### Configuration
Specifying a new wallpaper (and thus theme)
```
wal -i /path/to/wallpaper.jpg -g
```
The `-g` argument creates an oomox theme, so I can set Chromium's theme as well.

Reload in i3 in its config
```
exec_always --no-startup-id wal -R
```
Use xfce4-appearance-settings to reload Chromium's theme. Click off of wal and reselect wal.

## betterlockscreen
### Notes
I found this in r/unixporn's top of all time list [here](https://old.reddit.com/r/unixporn/comments/7iddwn/i3lock_faster_and_better_lockscreen/).
In my opinion, it looks much better than i3lock's default settings and I don't really care to 
customize the lock screen that much so I took somebody else's.
### Installation
```
pacaur -S betterlockscreen
```
### Configuration
Set an image as the lock screen
```
betterlockscreen -u "/path/to/image.jpg"
```
Set to lock screen with i3 keyboard shortcut in its config
```
bindsym $mod+Shift+x exec betterlockscreen -l dimblur
```
The optional `dimblur` argument asks betterlockscreen to dim and blur the lock screen image.

## Chromium
### Notes
It's Chromium. I use a lot of Google services so it fits right in. It also works with pywal!
### Installation
```
pacman -S chromium
```

## compton
### Notes
I'm not too sure what compton is. I just followed some directions to make i3 look pretty.
Right now, compton allows for shadow effects and fade transitions.
### Installation
```
pacman -S compton
```
Activate with i3 in its config
```
exec_always --no-startup-id compton -f -cC
```

## Fonts used
I have noto-fonts, ttf-dejavu, adobe-source-code-pro-fonts, and ttf-font-awesome installed.
Roboto is my main system font, Source Code Pro is my main monospace font.


# Managing dotfiles
I used [Brandon Invergo's guide](http://brandon.invergo.net/news/2012-05-26-using-gnu-stow-to-manage-your-dotfiles.html)
and GNU Stow to manage my dotfiles.

Do this after installing the necessary programs.
### Installation
```
pacman -S stow
```
Follow Invergo's guide for more detail.
### Configuration
Go to your main dotfiles directory. Execute `stow ` followed by the folder name that contains
an application's configuration files. For example, `stow i3`.

# Wallpapers
I use mostly [Wallhaven](https://alpha.wallhaven.cc/) for my wallpapers.

# Other
Currently v2 of my rice. My first had KDE Plasma and i3 as the WM.

Don't forget to `pacman -Syu'!
