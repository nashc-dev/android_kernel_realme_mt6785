# SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note OR MIT
#
# (C) COPYRIGHT 2020-2021 Arm Limited or its affiliates. All rights reserved.
#
#

# linux build system bootstrap for out-of-tree module

# default to building for the host
ARCH ?= $(shell uname -m)

ifeq ($(KDIR),)
$(error Must specify KDIR to point to the kernel to target))
endif


all: mali_gpu_partition_config

mali_gpu_partition_config:
	$(MAKE) ARCH=$(ARCH) -C $(KDIR) M=$(CURDIR) EXTRA_CFLAGS="-I$(CURDIR)/../include" KBUILD_EXTRA_SYMBOLS="$(EXTRA_SYMBOLS)" modules

clean:
	$(MAKE) ARCH=$(ARCH) -C $(KDIR) M=$(CURDIR) clean
