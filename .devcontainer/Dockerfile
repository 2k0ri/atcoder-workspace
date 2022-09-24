#-------------------------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See https://go.microsoft.com/fwlink/?linkid=2090316 for license information.
#-------------------------------------------------------------------------------------------------------------

FROM ubuntu:20.04

# Avoid warnings by switching to noninteractive
ENV DEBIAN_FRONTEND=noninteractive

# Configure apt and install packages
RUN sed -ri 's@http://(archive|security|us.archive)\.ubuntu\.com/ubuntu@http://ftp.riken.go.jp/Linux/ubuntu@' /etc/apt/sources.list \
    && apt-get update \
    && apt-get -y install --no-install-recommends apt-utils 2>&1 \
    # 
    # Verify git, process tools, lsb-release (useful for CLI installs) installed
    && apt-get -y install git procps lsb-release gnupg \
    # Install C++ tools
    build-essential gdb cmake cppcheck ccache clang-10 clang-format lldb-10 liblldb-10-dev libboost-dev python3-pip \
    #
    && ln -vs /usr/bin/clang-10 /usr/bin/clang \
    && ln -vs /usr/bin/clang++-10 /usr/bin/clang++ \
    && ln -vs /usr/bin/lldb-10 /usr/bin/lldb \
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
    && ln -s /usr/bin/lldb-server-10 /usr/bin/lldb-server-10.0.0

# Switch back to dialog for any ad-hoc use of apt-get
ENV DEBIAN_FRONTEND=dialog
