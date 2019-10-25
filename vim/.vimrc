set number
set wrap
filetype plugin on
syntax on

let g:powerline_pycmd="py3"

set rtp+=/usr/lib/python3.7/site-packages/powerline/bindings/vim/
set laststatus=2

set tabstop=8
set softtabstop=0
set expandtab
set shiftwidth=4
set smarttab

set number relativenumber
augroup numbertoggle
    autocmd!
    autocmd BufEnter,FocusGained,InsertLeave * set relativenumber
    autocmd BufLeave,FocusLost,InsertEnter   * set norelativenumber
augroup END
" set nu rnu

map <C-J> 5j
map <C-K> 5k
