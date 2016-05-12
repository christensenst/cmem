FROM debian:jessie

#### Install system dependencies

RUN apt-get update && apt-get install -y \
    ca-certificates \ # PEM files of CA certificates to allow SSL-based applications to check for the authenticity of SSL connections
    git \
    python \
    python-dev \
    wget \
    curl \
    vim \
    unzip \
    sudo

## Install pip
RUN curl -o "/tmp/get-pip.py" --create-dirs --silent --show-error --retry 5 https://bootstrap.pypa.io/get-pip.py && python /tmp/get-pip.py --no-wheel

##ADD ./cmem /opt/
RUN mkdir -m 777 /opt/cmem
COPY ./cmem /opt/cmem
