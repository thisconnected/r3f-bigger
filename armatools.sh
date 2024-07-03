#!/usr/bin/env bash

ARMATOOLSPATH="/data/SteamLibrary/steamapps/common/Arma\ 3\ Tools"
PBOPATH="~/Downloads/pboviewer-cli-linux-x64/./PboViewer"
#alias cfgconvert="wine $ARMATOOLSPATH/CfgConvert/CfgConvert.exe"
HOME_WINE="z:/home/thisconnect/r3ffixed/Addons/R3F_bigger"


function unpackarma
{
    cmd="wine $ARMATOOLSPATH/CfgConvert/CfgConvert.exe -txt -dst"
    arg1="$HOME_WINE/$1"
    shift
    arg2="$HOME_WINE/$1"

    cmd="$cmd $arg1 $arg2"
    echo $cmd
    eval $cmd
}
function packarma
{
    cmd="wine $ARMATOOLSPATH/CfgConvert/CfgConvert.exe -bin -dst"
    arg1="$HOME_WINE/$1"
    shift
    arg2="$HOME_WINE/$1"

    cmd="$cmd $arg1 $arg2"
    echo $cmd
    eval $cmd
}

function packPBO
{
    cmd="$PBOPATH packFolder --path=\"./$1\""
    echo $cmd
    eval $cmd
}
function unpackPBO
{
    cmd="$PBOPATH unpackFolder --path=\"$1\""
    echo $cmd
    eval $cmd
}
