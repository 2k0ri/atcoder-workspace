#-------------------------------------------------------------------------------------------------------------
# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License. See https://go.microsoft.com/fwlink/?linkid=2090316 for license information.
#-------------------------------------------------------------------------------------------------------------

FROM ubuntu:19.04

# Avoid warnings by switching to noninteractive
ENV DEBIAN_FRONTEND=noninteractive

# Configure apt and install packages
RUN sed -ri 's@http://(..\.)?(archive|security)\.ubuntu\.com/ubuntu@http://ftp.riken.go.jp/Linux/ubuntu@' /etc/apt/sources.list \
    && apt-get update \
    && apt-get -y install --no-install-recommends apt-utils 2>&1 \
    # 
    # Verify git, process tools, lsb-release (useful for CLI installs) installed
    && apt-get -y install git procps lsb-release \
    #
    # Install C++ tools
    && apt-get -y install build-essential cmake cppcheck ccache valgrind google-perftools libgoogle-perftools-dev global clang clang-format lldb libboost-dev python3-pip \
    #
    # Clean up
    && apt-get autoremove -y \
    && apt-get clean -y \
    && rm -rf /var/lib/apt/lists/* \
    #
    # Install atcoder-tools
    && pip3 install --no-cache-dir atcoder-tools

# Switch back to dialog for any ad-hoc use of apt-get
ENV DEBIAN_FRONTEND=dialog
