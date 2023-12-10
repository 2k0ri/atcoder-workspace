#-------------------------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See https://go.microsoft.com/fwlink/?linkid=2090316 for license information.
#-------------------------------------------------------------------------------------------------------------

FROM ubuntu:22.04

# Avoid warnings by switching to noninteractive
ENV DEBIAN_FRONTEND=noninteractive

# Configure apt and install packages
RUN sed -ri 's@http://(archive|security|us.archive)\.ubuntu\.com/ubuntu@http://ftp.riken.go.jp/Linux/ubuntu@' /etc/apt/sources.list \
    && apt-get update \
    && apt-get -y install --no-install-recommends apt-utils 2>&1 \
    # 
    # Verify git, process tools, lsb-release (useful for CLI installs) installed
    && apt-get -y install git procps lsb-release gnupg wget \
    && echo 'deb http://apt.llvm.org/jammy/ llvm-toolchain-jammy-16 main' > /etc/apt/sources.list.d/llvm.list \
    && wget -qO- https://apt.llvm.org/llvm-snapshot.gpg.key > /etc/apt/trusted.gpg.d/apt.llvm.org.asc \
    # Install C++ tools
    && apt-get update \
    && apt-get -y install build-essential gdb cmake cppcheck ccache clang-16 clang-format lldb-16 liblldb-16-dev libboost-dev python3-pip \
    #
    && ln -vs /usr/bin/clang-16 /usr/bin/clang \
    && ln -vs /usr/bin/clang++-16 /usr/bin/clang++ \
    && ln -vs /usr/bin/lldb-16 /usr/bin/lldb \
    && ln -vs /usr/bin/cat /usr/bin/diff-highlight \
    #
    # Clean up
    && apt-get autoremove -y \
    && apt-get clean -y \
    && rm -rf /var/lib/apt/lists/*

# Build lldb-mi 10
RUN git clone https://github.com/lldb-tools/lldb-mi.git \
    && cd lldb-mi \
    && cmake . \
    && cmake --build . \
    && cp src/lldb-mi /usr/bin/lldb-mi \
    && cd .. \
    && rm -rf lldb-mi \
    && ln -s /usr/bin/lldb-server-16 /usr/bin/lldb-server-16.0.0

# Switch back to dialog for any ad-hoc use of apt-get
ENV DEBIAN_FRONTEND=dialog
