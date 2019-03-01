# dotfiles
dotfiles for personal use. dotfiles are custom user configuration files.
They usually start with a period, hence the name. I've included reasoning as to why I use what.

I use i3 on Antergos with Xfce4 services because I'm too lazy to install stuff individually. 
Running on a Thinkpad X1 Carbon (gen. 5).

Always improving for better looks and productivity. Always learning.

# Previews
## Under construction
Display Manager - `lightdm` with [`aether`](https://github.com/NoiSek/AetherA) theme
![lightdm-aether](images/greeter.png)

# Current dots

## i3(gaps)
### Notes
i3 was introduced to me by my friend who recommended it because of the large user base, 
ease of customization, and productivity. It's the first one I tried and I haven't had a 
reason to switch.

I use the branch i3gaps because of aesthetics.

I rebound the movement keys to vim's `hjkl` instead of the default `jkl;`.

I used [Alex's guide](http://flux242.blogspot.com/2015/10/using-i3-tiling-window-manager-with.html)
to ensure that I could use i3 and Xfce services together somewhat smoothly. 

There was a bug with the xfce4-panel and using the Windows button as `$mod`. I figured it out
[here](https://forum.antergos.com/topic/10809/no-running-instance-of-xfce4-panel-was-found/3).

To set the PrtSc button on your keyboard, head to the `xfce4-settings-manager` > Keyboard > 
Application Shortcuts and add `xfce4-screenshooter` as a command.
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
yay -S polybar
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
It's Vim. Which is not on a default Arch/Antergos installation.
### Installation
```
pacman -S vim
```

## zsh
### Notes
Much like termite, I haven't learned most of zsh. 
For now, it is bash with tab completion and pretty default prompts.
### Installation
```
pacman -S zsh
```
Use `zsh` to run `zsh-newuser-install`.
#### Replace bash with zsh
Move the code you want to save (e.g. aliases and prompt) to ~/.zshrc.

Assuming zsh is installed correctly,
```
chsh -s /bin/zsh
```

## Powerline
### Notes
I use powerline for the shell prompt and to make vim look better.
### Installation
```
pacman -S powerline
pacman -S powerline-fonts
```
Currently mostly default settings. Check the Arch Wiki.

## Rofi
### Notes
rofi is a good alternative to the i3's default dmenu. Provides more customization options.
### Installation
```
pacman -S rofi
```


# Other Programs
## wpgtk
### Notes
Changed from `pywal` because pywal no longer supports oomox.

I change my background image a lot and I don't have good color sense, 
so I use `wpgtk` to solve this.
wpgtk can change the color scheme of your entire system with one terminal line based on a
specified background. It's really great. Seriously, it's good. Templates too.
### Installation
```
yay -S wpgtk-git
```
To create new default templates
```
wpg-install.sh
```
Use option `-h` for help.

Also, select FlatColor under xfce4-appearance-settings > style.
### Configuration
Use the GUI, it's really nice and easy.
```
wpg
```

Reload in i3 in its config
```
exec_always --no-startup-id wal -R
```
Use xfce4-appearance-settings to reload Chromium's theme. Click off of FlatColor and reselect FlatColor.

## betterlockscreen
### Notes
I found this in r/unixporn's top of all time list [here](https://old.reddit.com/r/unixporn/comments/7iddwn/i3lock_faster_and_better_lockscreen/).
In my opinion, it looks much better than i3lock's default settings and I don't really care to 
customize the lock screen that much so I took somebody else's.
### Installation
```
yay -S betterlockscreen
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
I have noto-fonts, ttf-dejavu, adobe-source-code-pro-fonts, ttf-ms-fonts, and ttf-font-awesome installed.
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
Go to your main dotfiles directory. Execute `stow` followed by the folder name that contains
an application's configuration files. For example, `stow i3`.

# Wallpapers
I use [Wallhaven](https://alpha.wallhaven.cc/) for my non-anime wallpapers.

# Other
Currently v2 of my rice. My first used KDE Plasma and i3 as the WM.

# List of installed packages for reference
- xfce
- chromium
- i3gaps
- termite
- rofi
- noto-fonts, ttf-dejavu, adobe-source-code-pro-fonts
- zsh
- polybar
- ttf-font-awesome
- compton
- pywal
- betterlockscreen
- cmatrix
- htop
- ttf-ms-fonts
- yay (replacing pacaur)
- aether (lightdm theme)

Don't forget to `pacman -Syu` and `yay`!
