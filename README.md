<p align="center">
  <a href="http://www.cenocloud.com">
    <img width="200" src="https://raw.githubusercontent.com/CenoOS/CenoOS-IOT/master/docs/docs/img/logo.png">
  </a>
</p>

<h1 align="center">CenoOS-IOT</h1>

<div align="center">
CenoOS is a real time operating system for IOT devices from cenocloud.

[![open issues](https://img.shields.io/github/issues/badges/shields.svg?style=flat-square)](https://github.com/CenoOS/CenoOS-IOT/issues)
[![closed issues](https://img.shields.io/github/issues-closed/badges/shields.svg?style=flat-square)](https://github.com/CenoOS/CenoOS-IOT/issues)
[![Discord](https://img.shields.io/discord/534285557157855232.svg?style=flat-square)](https://discordapp.com/channels/534285557157855232/534285557157855234)
</div>

# Docuemnt

## Architecture Overview

<p align="center">

 <img width="600" src="https://raw.githubusercontent.com/CenoOS/Ceno-RTOS/master/docs/assets/arch2.png">

</p>
 
## Prepare

### 开发板
在根目录/conf/makefile.conf中修改如下配置:
```makefile
# 开发板支持
ARCH=arm32
BOARD=ek-TM4C123gxl
MCU=TM4C123GH6PM
LINK_FILE=link.ld
OCD_CFG_FILE=ek-tm4c123gxl.cfg
```
其中选项对应board下支持的开发版

### 配置OPENOCD

```makefile
OPENOCD_SCRIPT_DIR=/usr/local/share/openocd/scripts/board
```

### 配置项目

```makefile
BASE_DIR=/Users/neroyang/project/Ceno-RTOS

```

### 构建

#### OPENOCD启动

```bash
cd user
make openOCD_connect
```

#### 构建

```bash
make clean
make build
```

#### 烧写

```bash
make flash
```

### 写在最后
have a good trial!

# Community
discord

twitch

# License
CenoOS is released under the Apache 2.0 license


[![Let's fund issues in this repository](https://issuehunt.io/static/embed/issuehunt-button-v1.svg)](https://issuehunt.io/repos/157975898)

![CenoOS](https://raw.githubusercontent.com/CenoOS/Ceno-RTOS/master/docs/assets/twitter_header_photo_1.png)