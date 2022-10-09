set number
set relativenumber

"set tab legnths
set tabstop=8 shiftwidth=8

"set indentation for c
set autoindent
set smartindent
set cindent

"Enable Syntax Highlighting
syntax enable

"Automatically closing braces
inoremap {<CR> {<CR>}<Esc>ko<tab>
inoremap [<CR> [<CR>]<Esc>ko<tab>
inoremap (<CR> (<CR>)<Esc>ko<tab>

"Manage trailing whitspace
highlight RedundantSpaces ctermbg=red guibg=red
match RedundantSpaces /\s\+$/

